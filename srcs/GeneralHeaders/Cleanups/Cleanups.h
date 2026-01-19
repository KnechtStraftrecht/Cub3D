/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cleanups.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:42:39 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:28:38 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLEANUPS_H
	#define CLEANUPS_H

#include <stdlib.h>
#include "Textures.h"
#include "Map.h"

void	FreeMap(Map *GameMap);
void	FreeTextures(Textures *GameTextures);

#endif
