/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializeGameData.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:52:11 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 19:39:42 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameData.h"

GameData	InitializeGameData(MlxVars *Mlx, Map *Map,
		Textures *Textures, Player *Player)
{
	Data->Map = Map;
	Data->Textures = Textures;
	Data->MlxVars = Mlx;
	Data->Player = Player;
}
