/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:28:35 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/21 18:36:02 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGERRORS_H
	#define PARSINGERRORS_H

#include <stdio.h>
#include "Cleanups.h"

// Parsing error code definitions (21-30 reserved)
typedef enum s_ParsingErrorCodes
{
	FileExtension = 21,
	MapCantOpen = 22,
	MapMissing = 23,
	TextureConfMissing = 24,
	InvalidTextures = 25,
	PlayerMissing = 26,
	TooManyPlayers = 27,
	MapNotClosed = 28,
}	ParsingErrorCodes;

void	E_FileExtension(void);
void	E_MapCantOpen(Textures *GameTextures);
void	E_TextureConfigM(void);
void	E_InvalidTextures(void);
void	E_PlayerMissing(void);
void	E_TooManyPlayers(void);
void	E_MapNotClosed(void);
void	E_MapMissing(Textures *GameTextures);

#endif
