/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeImage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:45:50 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 21:23:30 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Image.h"

void	FreeImage(Img *Image, MlxVars *MlxVars)
{
	mlx_destroy_image(MlxVars->Connection, Image->Img);
	free(Image->Address);
}
