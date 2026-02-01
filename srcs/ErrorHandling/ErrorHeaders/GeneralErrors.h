/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:09:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 20:05:54 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERALERRORS_H
	#define GENERALERRORS_H

#include <stdio.h>
#include <unistd.h>

// General error code definitions (1 - 10 reserved)
typedef enum s_GeneralErrorCodes
{
	SUCCESS = 0;
	Standard = 1,
	ArgumentNb = 2,
	AllocFail = 3,
}	GeneralErrorCodes;

void	E_Alloc(Map *GameMap, Textures *GameTextures, int fd);
void	E_ArgumentCount(void);

#endif
