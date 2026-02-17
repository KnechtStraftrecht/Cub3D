/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PutPixel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:16:00 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/12 13:20:00 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Image.h"

void	PutPixel(Img *Image, int x, int y, int color)
{
	char	*Destination;
	int		Offset;

	Offset = y * Image->LineLenght + x * (Image->BitsPPixel / 8);
	Destination = Image->Address + Offset;
	Destination[1] = get_r(color);
	Destination[2] = get_g(color);
	Destination[3] = get_b(color);
}
