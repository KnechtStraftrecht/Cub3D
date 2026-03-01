/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameData.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:50:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 21:08:21 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEDATA_H
	#define GAMEDATA_H

#include <sys/time.h>
#include "MlxVars.h"
#include "Image.h"
#include "Map.h"
#include "Textures.h"
#include "Player.h"

// Data struct for mlx loop, combines all other structs into one
// - MlxVars	*MlxVars;
// - Map		*Map;
// - Textures	*Textures;
// - Player		*Player;
typedef struct s_GameData {
	MlxVars			*MlxVars;
	Map				*Map;
	Textures		*Textures;
	Player			*Player;
	struct timeval	Time;
}	GameData;

void	InitializeGameData(GameData *Data, MlxVars *Mlx, Map *Map, Textures *Textures);

#endif
