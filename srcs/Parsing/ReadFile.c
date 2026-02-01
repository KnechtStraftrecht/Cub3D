/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:03 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 20:25:20 by KnechtStraf      ###   ########.fr       */
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
		E_MapCantOpen(GameTextures);
	tmp = get_next_line(fd);
	while (tmp && !MapStart(tmp) && !TexturesFilled(GameTextures))
	{
		if (isConfig(tmp))
			CopyConfig(tmp, GameTextures);
		free(tmp);
		tmp = get_next_line(fd);
	}
	free(tmp);
	if (!TexturesFilled(GameTextures))
		E_TextureConfigM(fd);
	close(fd);
}

// Reads the map and the number of rows of the map
// into the "Map" struct "GameMap"
void	ReadMap(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	char	*tmp;
	int		fd;

	fd = open(MapPath, O_RDONLY);
	if (fd < 0)
		E_MapCantOpen(GameTextures);
	tmp = get_next_line(fd);
	while (tmp && !MapStart(tmp))
	{
		free(tmp);
		tmp = get_next_line(fd);
	}
	if (!tmp)
		E_MapMissing(GameTextures, fd);
	while (tmp && !isEmpty(tmp))
	{
		if (TableAddBack(&(GameMap->Map), tmp) < 0)
			E_Alloc(GameMap, GameTextures, fd);
		GameMap->nbRows++;
		free(tmp);
		tmp = get_next_line(fd);
	}
	close(fd);
	free(tmp);
	MapFormat(GameMap);
}

// Responsible for reading out the input file
void	ReadFile(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	ReadTextures(MapPath, GameTextures);
	ReadMap(MapPath, GameMap, GameTextures);
}
