/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextureCheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:19:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 19:44:36 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

// Checks for valid texture paths
int	CheckTextureFiles(Textures *GameTextures, MlxVars *MlxVars)
{
	if (InitializeImage(&GameTextures->ImgNorth, MlxVars,
		GameTextures->PathNorth) > 0
		|| InitializeImage(&GameTextures->ImgSouth, MlxVars,
			GameTextures->PathSouth) > 0
		|| InitializeImage(&GameTextures->ImgEast, MlxVars,
			GameTextures->PathEast) > 0
		|| InitializeImage(&GameTextures->ImgWest, MlxVars,
			GameTextures->PathWest) > 0)
		return (InvalidTextures);
	free(GameTextures->PathNorth);
	GameTextures->PathNorth = NULL;
	free(GameTextures->PathSouth);
	GameTextures->PathSouth = NULL;
	free(GameTextures->PathEast);
	GameTextures->PathEast = NULL;
	free(GameTextures->PathWest);
	GameTextures->PathWest = NULL;
	return (0);
}

// Checks for valid RGB values
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

// Checks if textures are valid
void	TextureCheck(Textures *GameTextures, Map *GameMap, MlxVars *MlxVars)
{
	int	Error;

	Error = 0;
	Error = CheckTextureFiles(GameTextures, MlxVars);
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
