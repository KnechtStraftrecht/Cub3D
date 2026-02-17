/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeMlx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:45:48 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 21:18:58 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MlxVars.h"
#include "Cleanups.h"

void	FreeMlx(MlxVars *MlxVars)
{
	mlx_clear_window(MlxVars->Connection, MlxVars->Window);
	mlx_destroy_window(MlxVars->Connection, MlxVars->Window);
	FreeImage(MlxVars->Screen);
	mlx_destroy_display(MlxVars->Connection);
}
