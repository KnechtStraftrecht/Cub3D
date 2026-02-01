/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MapCheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:06 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 23:18:20 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

int	xClosed(Map *GameMap)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	while (GameMap->Map[++y])
	{
		while (GameMap->Map[y][x])
		{
			if (GameMap->Map[y][x] == '0')
			{
				if (x == 0 || GameMap->Map[y][x - 1] != '1')
					return (MapNotClosed);
				while (GameMap->Map[y][x] && GameMap->Map[y][x] == '0')
					x++;
				if (!GameMap->Map[y][x] || GameMap->Map[y][x] != '1')
					return (MapNotClosed);
			}
			x++;
		}
		x = 0;
	}
	return (0);
}

int	yClosed(Map *GameMap)
{
	int	x;
	int	y;

	x = -1;
	y = 0;
	while (GameMap->Map[y][++x])
	{
		while (GameMap->Map[y][x])
		{
			if (GameMap->Map[y][x] == '0')
			{
				if (y == 0 || x > ft_strlen(GameMap->Map[y - 1][x]) || GameMap->Map[y - 1][x] != '1')
					return (MapNotClosed);
				while ((GameMap->Map[y][x] && GameMap->Map[y][x] == '0') || x > ft_strlen(GameMap->Map[y]))
					y++;
				if (x > ft_strlen(GameMap->Map[y - 1][x]) || !GameMap->Map[y][x] || GameMap->Map[y][x] != '1')
					return (MapNotClosed);
			}
			y++;
		}
		y = 0;
	}
	return (0);
}

int	checkClosed(Map *GameMap)
{
	int	Error;

	Error = xClosed(GameMap);
	Error = yClosed(GameMap);
	return (Error);
}

// Checks the submitted map for unknown characters
// Checks whether the map is closed or not
void	MapCheck(Map *GameMap, Textures *GameTextures)
{
	int	Error;

	Error = 0;
	Error = checkClosed(GameMap);
	if (Error == MapNotClosed)
	{
		FreeMap(GameMap);
		FreeTextures(GameTextures);
		E_MapNotClosed();
	}
}