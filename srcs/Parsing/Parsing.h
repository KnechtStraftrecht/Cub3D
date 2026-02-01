/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:21:16 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 20:17:26 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
	#define PARSING_H

#include "Map.h"
#include "Textures.h"
#include "ParsingErrors.h"
#include "GeneralErrors.h"
#include "libft.h"

void	InputFileParser(char *MapPath, Map *GameMap, Textures *GameTextures);
void	FileCheck(char *MapPath);
void	ReadFile(char *MapPath, Map *GameMap, Textures *GameTextures);
void	CopyConfig(char *line, Textures *GameTextures);
void	extractRGBs(Textures *GameTextures, char *Line);
void	extractTexturePath(Textures *GameTextures, char *Line, char ID);
int		MapStart(char *FileSnippet);
int		TexturesFilled(Textures *Textures);
int		isEmpty(char *str);
int		isConfig(char *line);
void	MapFormat(Map *GameMap);
void	TextureCheck(Textures *GameTextures, Map *GameMap);

#endif
