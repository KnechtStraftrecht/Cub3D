/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeMap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:35:58 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 21:02:09 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"
#include <stdio.h>

void	InitializeMap(Map *GameMap)
{
	GameMap->Map = NULL;
	GameMap->nbColums = 0;
	GameMap->nbRows = 0;
}
