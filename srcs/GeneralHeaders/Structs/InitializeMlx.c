/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeMlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:14:19 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 18:26:26 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MlxVars.h"

void	InitializeMlx(MlxVars *MlxVars, Textures *Textures)
{
	int	IndexX;
	int	IndexY;

	MlxVars->Connection = mlx_init();
	MlxVars->Window = mlx_new_window(MlxVars->Connection, WIDTH, HEIGHT, "Cub3D");
	InitializeImage(MlxVars->Screen, MlxVars, WIDTH, HEIGHT);
	InitializeImage(MlxVars->Template, MlxVars, WIDTH, HEIGHT);
	IndexX = 0;
	IndexY = 0;
	while (IndexY <= HEIGHT / 2)
	{
		PutPixel(MlxVars->Template, IndexX, IndexY, RGBtoInt(Textures->CeilingColor));
		IndexX++;
		if (IndexX > WIDTH)
			IndexX = 0;
		IndexY++;
	}
	while (IndexY <= HEIGHT)
	{
		PutPixel(MlxVars->Template, IndexX, IndexY, RGBtoInt(Textures->FloorColor));
		IndexX++;
		if (IndexX > WIDTH)
			IndexX = 0;
		IndexY++;
	}
}
