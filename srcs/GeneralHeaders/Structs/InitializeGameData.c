/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeGameData.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:52:11 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 21:21:22 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameData.h"

void	InitializeGameData(GameData *Data, MlxVars *Mlx, Map *Map, Textures *Textures)
{
	Data->Map = Map;
	Data->Textures = Textures;
	Data->MlxVars = Mlx;
}
