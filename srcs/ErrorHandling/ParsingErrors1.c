/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:21:26 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 18:21:33 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ParsingErrors.h"
#include "Textures.h"

// Error for wrong file extension (not ".cub")
void	E_FileExtension(void)
{
	printf("Error\n");
	printf("File extension has to be \".cub\"\n");
	exit(FileExtension);
}

// Error if map file cannot be opened
void	E_MapCantOpen(Textures *GameTextures)
{
	printf("Error\n");
	printf("Map file cannot be opened!\n");
	FreeTextures(GameTextures);
	exit(MapCantOpen);
}

// Error if texture configs are missing
void	E_TextureConfigM(int fd)
{
	printf("Error\n");
	printf("Texture configurations are missing, please check the submitted map!\n");
	close(fd);
	exit(TextureConfMissing);
}

// Error if texture configs are invalid
void	E_InvalidTextures(void)
{
	printf("Error\n");
	printf("Invalid Textures were submitted!\n");
	printf("RGB cannot be negative and Texturefile paths have to be correct!\n");
	printf("Please check the submitted map.\n");
	exit(InvalidTextures);
}

// Error if there is no player found on the map
void	E_PlayerMissing(void)
{
	printf("Error\n");
	printf("There is no Player on the Map!\n");
	exit(PlayerMissing);
}
