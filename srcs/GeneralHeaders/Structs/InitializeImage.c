/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeImage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:14:50 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/16 21:21:59 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Image.h"

// Initializes a full Image struct from xpm file, when Image->Height and Image->Width are set accordignly
int	InitializeImageXpm(Img **Image, MlxVars *MlxVars, char *TexturePath)
{
	(*Image)->Img = mlx_xpm_file_to_image(MlxVars->Connection, TexturePath,
		(*Image)->Width, (*Image)->Height);
	if (!(*Image)->Img)
		return (InvalidTextures);
	(*Image)->Address = mlx_get_data_addr((*Image)->Img, &(*Image)->BitsPPixel,
		&(*Image)->LineLenght, &(*Image)->Endian);
	return (0);
}

// Initializes Image Strut without xpm
int	InitializeImage(Img **Image, MlxVars *MlxVars, int Width, int Height)
{
	(*Image)->Img = mlx_new_image(MlxVars->Connection, Width, Height);
	if (!(*Image)->Img)
		return (InvalidTextures);
	(*Image)->Address = mlx_get_data_addr((*Image)->Img, &(*Image)->BitsPPixel,
		&(*Image)->LineLenght, &(*Image)->Endian);
	return (0);
}
