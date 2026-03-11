/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Raycaster.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:49:45 by hkullert          #+#    #+#             */
/*   Updated: 2026/03/06 16:49:04 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Raycaster.h"

void	SetPos(Player *Player, double Slope, double Distance)
{
	double	DeltaA;
	double	DeltaB;

	DeltaA = M_SQRT2((Distance * Distance) / ((Slope * Slope) + 1));
	DeltaB = M_SQRT2((Distance * Distance) - DeltaA);
	if ((Player->MvForward == true && Player->MvBackward == false)
		|| (Player->MvForward == false && Player->MvBackward == true))
	{
		if (Player->MvBackward == true)
			DeltaA *= -1.00
		DeltaB *= double((int)DeltaA >> 31);
		Player->PosX += DeltaA;
		PLayer->PosY += DeltaB;
	}
	if ((Player->MvRight == true && Player->MvLeft == false)
		|| (Player->MvRight == false && Player->MvLeft == true))
	{
		if (Player->MvLeft == true)
			DeltaA *= -1.00
		DeltaB *= double((int)DeltaA >> 31);
		Player->PosX += DeltaB;
		PLayer->PosY += DeltaA;
	}
}

void	SetDir(Player *Player, double TimeDelta)
{
	if (Player->LookRight == true && Player->LookLeft == false)
		
	else if (Player->LookLeft == true && Player->LookRight == false)
}

void	CalculatePos(Player *Player, struct timeval TimeLast)
{
	struct timeval	TimeCurr;
	double			TimeDelta;
	double			Slope;
	double			Distance;

	gettimeofday(&TimeCurr, NULL);
	TimeDeltaMs(&TimeDelta);
	Slope = Player->Direction->Y / Player->Direction->X;
	Distance = TimeDelta * MOVESPEED;
	SetPos(Player, Slope, Distance);
	SetDir(Player, TimeDelta);
}

void	Raycaster(GameData *Data)
{
	CalculatePosDir(Data->Player, Data->Time);
	CreateImage(Data->MlxVars, Data->Player, Data->Map);
}
