/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:46:07 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 21:02:01 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
	#define MAP_H

// Struct for map of Cub3d
// - char	**Map;
// - int	nbRows;
// - int	nbColums;
	typedef struct s_Map
{
	char	**Map;
	int		nbRows;
	int		nbColums;
}	Map;

void	InitializeMap(Map *GameMap);

#endif
