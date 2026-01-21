/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeMap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:35:58 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/21 21:24:53 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"
#include <stdio.h>

void	InitializeMap(Map *GameMap)
{
	GameMap->Map = NULL;
	GameMap->nbColums = 0;
	GameMap->nbRows = 0;
	GameMap->PlayerPos[0] = -1;
	GameMap->PlayerPos[1] = -1;
}
