/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeMlx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:45:48 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 18:27:33 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MlxVars.h"
#include "Cleanups.h"

void	FreeMlx(MlxVars *MlxVars)
{
	mlx_clear_window(MlxVars->Connection, MlxVars->Window);
	mlx_destroy_window(MlxVars->Connection, MlxVars->Window);
	FreeImage(MlxVars->Screen);
	FreeImage(MlxVars->Template);
	mlx_destroy_display(MlxVars->Connection);
}
