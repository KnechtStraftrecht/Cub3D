/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:37:59 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:18:14 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ErrorHeaders/ParsingErrors.h"

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
