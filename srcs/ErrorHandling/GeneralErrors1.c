/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralErrors1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:08:50 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 18:23:59 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"
#include "Textures.h"
#include "GeneralErrors.h"
#include "Cleanups.h"

// Error if memory allocation fails
// Frees all non-void arguments passed
void	E_Alloc(Map *GameMap, Textures *GameTextures, int fd)
{
	if (GameMap)
		FreeMap(GameMap);
	if (GameTextures)
		FreeTextures(GameTextures);
	if (fd > 0)
		close(fd);
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

