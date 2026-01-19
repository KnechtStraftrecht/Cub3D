/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeMap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:42:20 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:28:27 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cleanups.h"

// Frees parsed map of Cub3d
void	FreeMap(Map *GameMap)
{
	int	Index;

	Index = 0;
	while (GameMap->Map[Index])
	{
		free(GameMap->Map[Index]);
		Index++;
	}
	free(GameMap->Map);
}
