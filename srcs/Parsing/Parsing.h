/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:21:16 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 19:37:03 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
	#define PARSING_H

#include "Map.h"
#include "Textures.h"
#include "ParsingErrors.h"
#include "GeneralErrors.h"
#include "libft.h"
#include "MlxVars.h"
#include "Image.h"

#define WIDTH 100
#define HEIGHT 100

void	InputFileParser(char *MapPath, Map *GameMap, Textures *GameTextures, MlxVars *MlxVars);
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
void	TextureCheck(Textures *GameTextures, Map *GameMap, MlxVars *MlxVars);
void	MapCheck(Map *GameMap, Textures *GameTextures);

#endif
