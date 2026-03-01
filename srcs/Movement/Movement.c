/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 21:53:09 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 22:07:01 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Movement.h"

void	MovementStart(Player *Player, char Direction)
{
	switch (Direction)
	{
		case 'W':
			Player->MvForward = true;
			break ;
		case 'A':
			Player->MvLeft = true;
			break ;
		case 'S':
			Player->MvBackward = true;
			break ;
		case 'D':
			Player->MvRight = true;
			break ;
		case 'L':
			Player->LookLeft = true;
			break ;
		case 'R':
			Player->LookRight = true;
			break ;
	}
}

void	MovementStop(Player *Player, char Direction)
{
	switch (Direction)
	{
		case 'W':
			Player->MvForward = false;
			break ;
		case 'A':
			Player->MvLeft = false;
			break ;
		case 'S':
			Player->MvBackward = false;
			break ;
		case 'D':
			Player->MvRight = false;
			break ;
		case 'L':
			Player->LookLeft = false;
			break ;
		case 'R':
			Player->LookRight = false;
			break ;
	}
}
