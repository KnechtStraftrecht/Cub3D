/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Textures.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:02:18 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:17:29 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURES_H
	#define TEXTURES_H

// Struct for textures of Cub3d
// char	*PathNorth;
// char	*PathSouth;
// char	*PathEast;
// char	*PathWest;
// int	CeilingColor[3];
// int	FloorColor[3];
typedef struct s_Textures
{
	char	*PathNorth;
	char	*PathSouth;
	char	*PathEast;
	char	*PathWest;
	int		CeilingColor[3];
	int		FloorColor[3];
}	Textures;

#endif
