/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameData.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:50:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 21:15:15 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEDATA_H
	#define GAMEDATA_H

#include "MlxVars.h"
#include "Image.h"
#include "Map.h"
#include "Textures.h"

// Data struct for mlx loop, combines all other structs into one
// - MlxVars	*MlxVars;
// - Map		*Map;
// - Textures	*Textures;
typedef struct s_GameData {
	MlxVars		*MlxVars;
	Map			*Map;
	Textures	*Textures;
}	GameData;

void	InitializeGameData(GameData *Data, MlxVars *Mlx, Map *Map, Textures *Textures);

#endif
