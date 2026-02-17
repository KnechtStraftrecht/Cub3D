/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeTextures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:22:52 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/05 14:46:07 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cleanups.h"
#include "MlxVars.h"

// Frees Cub3d parsed game textures
void	FreeTextures(Textures *GameTextures, MlxVars *MlxVars)
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
		mlx_destroy_image(MlxVars->Connection, GameTextures->ImgNorth);
	if (GameTextures->ImgSouth)
		mlx_destroy_image(MlxVars->Connection, GameTextures->ImgSouth);
	if (GameTextures->ImgEast)
		mlx_destroy_image(MlxVars->Connection, GameTextures->ImgEast);
	if (GameTextures->ImgWest)
		mlx_destroy_image(MlxVars->Connection, GameTextures->ImgWest);
}
