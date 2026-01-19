/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintTextures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:39:59 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 20:10:58 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestFunctions.h"

// Prints the texture configs in the "Textures" struct
// passed in the following order:
// - Path north wall texture
// - Path south wall texture
// - Path east wall texture
// - Path west wall texture
// - Floor RGBs
// - Ceiling RGBs
void	PrintTextures(Textures *GameTextures)
{
	printf("\n");
	printf("NO ./%s\n", GameTextures->PathNorth);
	printf("SO ./%s\n", GameTextures->PathSouth);
	printf("EA ./%s\n", GameTextures->PathEast);
	printf("WE ./%s\n", GameTextures->PathWest);
	printf("\n");
	printf("F [%i][%i][%i]\n", GameTextures->FloorColor[0], GameTextures->FloorColor[1], GameTextures->FloorColor[2]);
	printf("C [%i][%i][%i]\n", GameTextures->CeilingColor[0], GameTextures->CeilingColor[1], GameTextures->CeilingColor[2]);
	printf("\n");
}
