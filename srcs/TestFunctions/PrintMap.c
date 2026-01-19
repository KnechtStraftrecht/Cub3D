/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintMap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:40:03 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 20:11:09 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestFunctions.h"

// Prints the all variables in the "Map" struct
// passed in the following order:
// - Player position
// - Number of rows
// - Number of coloums
// - Parsed map
void	PrintMap(Map *GameMap)
{
	printf("\n");
	printf("Player position: [x = %i][y = %i]\n", GameMap->PlayerPos[0], GameMap->PlayerPos[1]);
	printf("Amount of rows: [%i]\n", GameMap->nbRows);
	printf("Amount of coloums: [%i]\n", GameMap->nbColums);
	printf("\n\n");
	ft_print_table(GameMap->Map, 2);
	printf("\n\n");
}
