/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeTextures.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:52:11 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 19:58:29 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Textures.h"
#include <stdio.h>

// Initializes all variables in the "Textures" struct to Null or -1;
void	InitializeTextures(Textures *GameTextures)
{
	GameTextures->PathNorth = NULL;
	GameTextures->PathSouth = NULL;
	GameTextures->PathEast = NULL;
	GameTextures->PathWest = NULL;
	GameTextures->ImgNorth = NULL;
	GameTextures->ImgSouth = NULL;
	GameTextures->ImgEast = NULL;
	GameTextures->ImgWest = NULL;
	GameTextures->CeilingColor[0] = -1;
	GameTextures->CeilingColor[1] = -1;
	GameTextures->CeilingColor[2] = -1;
	GameTextures->FloorColor[0] = -1;
	GameTextures->FloorColor[1] = -1;
	GameTextures->FloorColor[2] = -1;
}
