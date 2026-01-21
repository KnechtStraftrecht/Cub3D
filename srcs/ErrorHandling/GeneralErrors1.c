/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralErrors1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:08:50 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/21 18:35:01 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"
#include "Textures.h"
#include "GeneralErrors.h"
#include "Cleanups.h"

// Error if memory allocation fails
// Frees all non-void arguments passed
void	E_Alloc(Map *GameMap, Textures *GameTextures)
{
	if (GameMap)
		FreeMap(GameMap);
	if (GameTextures)
		FreeTextures(GameTextures);
	exit(AllocFail);
}

