/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cleanups.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:42:39 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 21:23:44 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLEANUPS_H
	#define CLEANUPS_H

#include <stdlib.h>
#include "GameData.h"

void	FreeMap(Map *GameMap);
void	FreeTextures(Textures *GameTextures);
void	FreeMlx(MlxVars *MlxVars);
void	FreeImage(Img *Image, MlxVars *MlxVars);
void	FreeGameData(GameData *Data);

#endif
