/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:08:40 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/03/06 16:43:31 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
	#define PLAYER_H

#include <stdbool.h>
#include "Vector.h"

// Player Struct containing all Player Data (Positiong, Facing Direction, etc.)
// - float	PosX;
// - float	PosY;
// - Vector	*Direction;
// - Vector	*Plane;
typedef struct s_Player {
	double	PosX;
	double	PosY;
	bool	MvForward;
	bool	MvBackward;
	bool	MvLeft;
	bool	MvRight;
	bool	LookLeft;
	bool	LookRight;
	Vector	*Direction;
	Vector	*Plane;
}	Player;

#endif