/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextureCheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:19:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 20:17:20 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

int	CheckTextureFiles(Textures *GameTextures)
{
	GameTextures->ImgNorth = mlx_xpm_file_to_image(mlx, GameTextures->PathNorth, &Width, &Height);
	GameTextures->ImgSouth = mlx_xpm_file_to_image(mlx, GameTextures->PathSouth, &Width, &Height);
	GameTextures->ImgEast = mlx_xpm_file_to_image(mlx, GameTextures->PathEast, &Width, &Height);
	GameTextures->ImgWest = mlx_xpm_file_to_image(mlx, GameTextures->PathWest, &Width, &Height);
	if (!GameTextures->ImgNorth
		|| !GameTextures->ImgSouth
		|| !GameTextures->ImgEast
		|| !GameTextures->ImgWest)
		return (InvalidTextures);
	return (0);
}

int	CheckRGBs(Textures *GameTextures)
{
	int	Index;

	Index = 0;
	while (Index < 3)
	{
		if (GameTextures->CeilingColor[Index] > 255
			|| GameTextures->CeilingColor[Index] < 0
			|| GameTextures->FloorColor[Index] > 255
			|| GameTextures->FloorColor[Index] < 0)
		return (InvalidTextures);
		Index++;
	}
	return (0);
}

void	TextureCheck(Textures *GameTextures, Map *GameMap)
{
	int	Error;

	Error = 0;
	Error = CheckTextureFiles(GameTextures);
	if (Error == InvalidTextures)
	{
		FreeMap(GameMap);
		FreeTextures(GameTextures);
		E_InvalidTextures();
	}
	Error = CheckRGBs(GameTextures);
	if (Error == InvalidTextures)
	{
		FreeMap(GameMap);
		FreeTextures(GameTextures);
		E_InvalidTextures();
	}
	return (0);
}