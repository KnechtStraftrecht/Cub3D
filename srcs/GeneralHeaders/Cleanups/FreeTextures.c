/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeTextures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:22:52 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 20:09:24 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cleanups.h"

// Frees Cub3d parsed game textures
void	FreeTextures(Textures *GameTextures)
{
	if (GameTextures->PathNorth)
		free(GameTextures->PathNorth);
	if (GameTextures->PathSouth)
		free(GameTextures->PathSouth);
	if (GameTextures->PathEast)
		free(GameTextures->PathEast);
	if (GameTextures->PathWest)
		free(GameTextures->PathWest);
	if (GameTextures->ImgNorth)
		free(GameTextures->ImgNorth);
	if (GameTextures->ImgSouth)
		free(GameTextures->ImgSouth);
	if (GameTextures->ImgEast)
		free(GameTextures->ImgEast);
	if (GameTextures->ImgWest)
		free(GameTextures->ImgWest);
}
