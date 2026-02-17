/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MlxVars.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:05:44 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/16 21:12:47 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLXVARS_H
	#define MLXVARS_H

#include "Image.h"
#include "mlx.h"

// Struct for all Mlx variables needed except for texture imgs
// - void	*Mlx; (Mlx pointer)
// - img	*Screen; (Screen to be displayed after raycasting)
typedef struct s_MlxVars
{
	void	*Connection;
	void	*Window;
	Img		*Screen;
}	MlxVars;

void	InitializeMlx(MlxVars *MlxVars);

#endif
