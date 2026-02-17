/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:10:03 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/16 21:22:04 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
	#define IMAGE_H

#include "mlx.h"
#include "MlxVars.h"
#include "ParsingErrors.h"

// Image struct, containing all values for an image
// - void	*Img;
// - char	*Address;
// - int	Width;
// - int	Height;
// - int	LineLenght;
// - int	BitsPPixel;
// - int	Endian;
typedef struct s_Img
{
	void	*Img;
	char	*Address;
	int		Width;
	int		Height;
	int		LineLenght;
	int		BitsPPixel;
	int		Endian;
}	Img;

#endif
