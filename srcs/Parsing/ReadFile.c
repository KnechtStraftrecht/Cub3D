/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:03 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 22:00:56 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"
#include <fcntl.h>

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

	}
}

void	ReadFile(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	ReadTextures(MapPath, GameTextures);
	ReadMap(MapPath, GameMap);
}
