/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitializePlayer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 18:33:45 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 21:52:17 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.h"

void	SetDirection(Player *Player, float y, float x)
{
	Player->Direction->Y = y;
	Player->Direction->X = x;
}

void	SetPlane(Player *Player, float y, float x)
{
	Player->Plane->Y = y;
	Player->Plane->X = x;
}

void	SetPlayerStats(Player *Player, int y, int x, char Direction)
{
	Player->PosY = y + 0.5;
	Player->PosX = x + 0.5;
	switch (Direction)
	{
		case 'N':
			SetDirection(Player, -1, 0);
			SetPlane(Player, 0, 0.66);
			break ;
		case 'S':
			SetDirection(Player, 1, 0);
			SetPlane(Player, 0, -0.66);
			break ;
		case 'E':
			SetDirection(Player, 0, 1);
			SetPlane(Player, 0.66, 0);
			break ;
		case 'W':
			SetDirection(Player, 0, 1);
			SetPlane(Player, 0.66, 0);
			break ;
	}
}

void	InitializeMovement(Player *Player)
{
	Player->MvForward = false;
	Player->MvBackward = false;
	Player->MvLeft = false;
	Player->MvRight = false;
	Player->LookLeft = false;
	Player->LookRight = false;
}

void	InitializePlayer(Player *Player, Map *GameMap)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (GameMap[y])
	{
		while (GameMap[y][x])
		{
			if (GameMap[y][x] == 'N'
				|| GameMap[y][x] == 'S'
				|| GameMap[y][x] == 'E'
				|| GameMap[y][x] == 'W')
				SetPlayerStats(Player, y, x, GameMap[y][x]);
			x++;
		}
		x = 0;
		y++;
	}
	InitializeMovement(Player);
}
