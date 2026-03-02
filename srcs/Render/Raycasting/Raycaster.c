/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Raycaster.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:49:45 by hkullert          #+#    #+#             */
/*   Updated: 2026/03/02 15:21:52 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Raycaster.h"

void	SetPos(Player *Player, float TimeDelta)
{
	float	Slope;

	Slope = Player->Direction->Y / Player->Direction->X;
	Distance = 
	if (Player->MvForward == true)
		Player->PosY += (TimeDelta * MOVESPEED);
	if (Player->MvBackward == true)
		Player->PosY -= TimeDelta * MOVESPEED;
	if (Player->MvLeft == true)
		Player->PosX -= M_SQRT2((TimeDelta * MOVESPEED) / Slope);
	if (Player->MvRight == true)
		Player->PosX += TimeDelta * MOVESPEED;
}

void	CalculatePos(Player *Player, struct timeval TimeLast)
{
	struct timeval	TimeCurr;
	float			TimeDelta;

	gettimeofday(&TimeCurr, NULL);
	TimeDeltaMs(&TimeDelta);
	SetPos(Player, TimeDelta);
}

void	Raycaster(GameData *Data)
{
	CalculatePos(Data->Player, Data->Time);
	CreateImage(Data->MlxVars, Data->Player, Data->Map);
}
