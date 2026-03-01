/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MlxVars.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:05:44 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 15:47:44 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLXVARS_H
	#define MLXVARS_H

#include <stdio.h>
#include "Image.h"
#include "mlx.h"
#include "Main.h"
#include "Textures.h"

// Struct for all Mlx variables needed except for texture imgs
// - void	*Mlx; (Mlx pointer)
// - img	*Screen; (Screen to be displayed after raycasting)
typedef struct s_MlxVars
{
	void	*Connection;
	void	*Window;
	Img		*Screen;
	Img		*Template;
}	MlxVars;

void	InitializeMlx(MlxVars *MlxVars, Textures *Textures);

#endif
