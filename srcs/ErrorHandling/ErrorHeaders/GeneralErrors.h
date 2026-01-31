/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:09:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/31 22:39:01 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERALERRORS_H
	#define GENERALERRORS_H

#include <stdio.h>
// General error code definitions (1 - 10 reserved)
typedef enum s_GeneralErrorCodes
{
	Standard = 1,
	ArgumentNb = 2,
	AllocFail = 3,
}	GeneralErrorCodes;

void	E_Alloc(Map *GameMap, Textures *GameTextures);
void	E_ArgumentCount(void);

#endif
