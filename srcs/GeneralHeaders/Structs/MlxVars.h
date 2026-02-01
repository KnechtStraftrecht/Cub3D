/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MlxVars.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:05:44 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/01 22:14:01 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLXVARS_H
	#define MLXVARS_H

#include "Image.h"

// Struct for all Mlx variables needed except for texture imgs
// - void	*Mlx; (Mlx pointer)
// - img	*Screen; (Screen to be displayed after raycasting)
typedef struct s_MlxVars
{
	void	*Mlx;
	Img		*Screen;
}	MlxVars;

#endif