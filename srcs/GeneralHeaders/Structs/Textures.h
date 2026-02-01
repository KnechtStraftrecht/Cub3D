/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Textures.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:02:18 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 19:57:31 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURES_H
	#define TEXTURES_H

// Struct for textures of Cub3d
// - char	*PathNorth;
// - char	*PathSouth;
// - char	*PathEast;
// - char	*PathWest;
// - int	CeilingColor[3];
// - int	FloorColor[3];
typedef struct s_Textures
{
	char	*PathNorth;
	char	*PathSouth;
	char	*PathEast;
	char	*PathWest;
	void	*ImgNorth;
	void	*ImgSouth;
	void	*ImgEast;
	void	*ImgWest;
	int		CeilingColor[3];
	int		FloorColor[3];
}	Textures;

void	InitializeTextures(Textures *GameTextures);

#endif
