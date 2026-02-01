/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:37:59 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 21:40:22 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ParsingErrors.h"

// Error if more than one player was found on the map
void	E_TooManyPlayers(void)
{
	printf("Error\n");
	printf("There is more than 1 Player on the map!\n");
	exit(TooManyPlayers);
}

// Error if map is not surrounded by walls
void	E_MapNotClosed(void)
{
	printf("Error\n");
	printf("The map submitted is not enclosed by walls!\n");
	exit(MapNotClosed);
}

// Error if no map is found in the passed '.cub' file
void	E_MapMissing(Textures *GameTextures, int fd)
{
	printf("Error\n");
	printf("The file passed, does not contain a map!\n");
	FreeTextures(GameTextures);
	close(fd);
	exit(MapMissing);
}

// Error if unknown entity is encountered on the map
void	E_UnknowEntity(char UnknownEntity, int x, int y)
{
	printf("Unknown character found: %c, at: [%i][%i]!\n", UnknownEntity, x, y);
	exit(UnknownEntity);
}
