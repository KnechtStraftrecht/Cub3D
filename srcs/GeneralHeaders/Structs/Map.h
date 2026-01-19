/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:46:07 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 20:04:39 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
	#define MAP_H

// Struct for map of Cub3d
// - char	**Map;
// - int	PlayerPos[2];
// - int	nbRows;
// - int	nbColums;
	typedef struct s_Map
{
	char	**Map;
	int		PlayerPos[2];
	int		nbRows;
	int		nbColums;
}	Map;

#endif
