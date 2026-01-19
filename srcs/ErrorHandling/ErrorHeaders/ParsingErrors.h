/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:28:35 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:21:14 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGERRORS_H
	#define PARSINGERRORS_H

#include <stdlib.h>

// Parsing error code definitions (21-30 reserved)
typedef enum s_ParsingErrorCodes
{
	FileExtension = 21,
	MapCantOpen = 22,
	TextureConfMissing = 23,
	InvalidTextures = 24,
	PlayerMissing = 25,
	TooManyPlayers = 26,
	MapNotClosed = 27,
}	ParsingErrorCodes;

void	E_FileExtension(void);
void	E_MapCantOpen(void);
void	E_TextureConfigM(void);
void	E_InvalidTextures(void);
void	E_PlayerMissing(void);
void	E_TooManyPlayers(void);
void	E_MapNotClosed(void);

#endif
