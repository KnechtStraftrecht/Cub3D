/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MapCheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:06 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 21:41:50 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

int	checkClosed(Map *GameMap)
{
	int	Error;

	Error = xClosed(GameMap);
	Error = yClosed(GameMap);
	return (Error);
}

void	MapCheck(Map *GameMap, Textures *GameTextures)
{
	int	Error;

	Error = 0;
	Error = checkClosednUnknown(GameMap, GameTextures);
	if (Error == MapNotClosed)
	{
		FreeMap(GameMap);
		FreeTextures(GameTextures);
		E_MapNotClosed();
	}
}