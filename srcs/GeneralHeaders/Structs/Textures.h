/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Textures.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:02:18 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 19:32:37 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURES_H
	#define TEXTURES_H

#include "Image.h"
// Struct for textures of Cub3d
// - char	*PathNorth;
// - char	*PathSouth;
// - char	*PathEast;
// - char	*PathWest;
// - Img	*ImgNorth;
// - Img	*ImgSouth;
// - Img	*ImgEast;
// - Img	*ImgWest;
// - int	CeilingColor[3];
// - int	FloorColor[3];
typedef struct s_Textures
{
	char	*PathNorth;
	char	*PathSouth;
	char	*PathEast;
	char	*PathWest;
	Img		*ImgNorth;
	Img		*ImgSouth;
	Img		*ImgEast;
	Img		*ImgWest;
	int		CeilingColor[3];
	int		FloorColor[3];
}	Textures;

void	InitializeTextures(Textures *GameTextures);

#endif
