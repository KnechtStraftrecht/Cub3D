/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Movement.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:53:09 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 22:03:44 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENT_H
	#define MOVEMENT_H

#include "Player.h"

void	MovementStart(Player *Player, char Direction);
void	MovementStop(Player *Player, char Direction);

#endif