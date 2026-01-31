/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralErrors1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:08:50 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/31 22:37:40 by hkullert         ###   ########.fr       */
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
	printf("A memory allocation failed, exiting!\n");
	exit(AllocFail);
}
// Error for invalid number of Arguments
void	E_ArgumentCount(void)
{
	printf("Invalid number of argumets!\n");
	printf("Only one '.cub' file to be executed should be passed!\n");
	exit(ArgumentNb);
}

