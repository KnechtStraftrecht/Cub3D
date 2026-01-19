/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeTextures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:22:52 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:28:05 by hkullert         ###   ########.fr       */
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
}
