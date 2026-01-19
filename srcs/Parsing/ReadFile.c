/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:03 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 21:02:11 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"
#include <fcntl.h>

// Read the texture paths and definitions into the "Textures" struct
// !!!!! FUNCTIONS "isConfig" and "CopyConfig" HAS YET TO BE WRITTEN !!!!
void	ReadTextures(char *MapPath, Textures *GameTextures)
{
	char	*tmp;
	int		fd;

	fd = open(MapPath, O_RDONLY);
	if (fd < 0)
		E_MapCantOpen();
	tmp = get_next_line(fd);
	while (tmp && !MapStart(tmp) && !TexturesFilled(GameTextures))
	{
		if (isConfig(tmp))
			CopyConfig(tmp, GameTextures);
		free(tmp);
		tmp = get_next_line(fd);
	}
	if (!TexturesFilled)
		E_TextureConfigM();
}

// Reads the map and the number of rows of the map
// into the "Map" struct "GameMap"
// !!! FIX LEAK OF TEXTURES IF ERROR THROWN !!!
void	ReadMap(char *MapPath, Map *GameMap)
{
	char	*tmp;
	int		fd;

	fd = open(MapPath, O_RDONLY);
	if (fd < 0)
		E_MapCantOpen();
	while (tmp && !MapStart(tmp))
	{
		free(tmp);
		tmp = get_next_line(fd);
	}
	if (!tmp)
		E_MapMissing();
	GameMap->nbRows = 0;
	while (tmp && !isEmpty(tmp))
	{
		if (TableAddBack(GameMap->Map, tmp) < 0)
			E_Alloc(GameMap, NULL);
		GameMap->nbRows++;
		free(tmp);
		get_next_line(fd);
	}
	free(tmp);
}

// Responsible for reading out the input file
void	ReadFile(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	ReadTextures(MapPath, GameTextures);
	ReadMap(MapPath, GameMap);
}
