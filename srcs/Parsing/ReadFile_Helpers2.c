/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile_Helpers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:47:09 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 21:45:41 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

// Extracts paths to wall textures in "Line" to "Textures" struct
void	extractTexturePath(Textures *GameTextures, char *Line)
{
	char	*TexturePath;
	int		PathLenght;
	int		IndexLine;
	int		IndexPath;

	IndexLine = 0;
	while (Line[IndexLine] && Line[IndexLine] != '.')
		IndexLine++;
	PathLenght = 0;
	while (Line[IndexLine + PathLenght] && !ft_iswhsp(Line[IndexLine + PathLenght])
		&& Line[IndexLine + PathLenght] != '\n')
		PathLenght++;
	TexturePath = malloc(sizeof(char) * PathLenght + 1);
	if (!TexturePath)
		E_Alloc(NULL, GameTextures);
	IndexPath = 0;
	while (Line[IndexLine])
		TexturePath[IndexPath++] = Line[IndexLine++];
	TexturePath[IndexPath] = '\0';
}

// Extracts parsed RGB value in "tmp" into the "Textures" struct
// IndexRGB is the current RGB value filled in ceiling or floor RGB
// C or F (CorF) tells if ceiling or floor color are being filled
void	extractNumber(Textures *GameTextures, char **tmp, int *IndexRGB, char CorF)
{
	if (CorF == 'C')
		GameTextures->CeilingColor[*IndexRGB] = ft_atoi(*tmp);
	else
		GameTextures->FloorColor[*IndexRGB] = ft_atoi(*tmp);
	*IndexRGB++;
}

// Extracts RGB values in "Line" to "Textures" struct
void	extractRGBs(Textures *GameTextures, char *Line)
{
	char	*tmp;
	char	CorF;
	int		IndexLine;
	int		IndexTmp;
	int		IndexRGB;

	IndexLine = -1;
	IndexTmp = 0;
	IndexRGB = 0;
	CorF = Line[IndexLine];
	tmp = calloc(sizeof(char*), 4);
	if (!tmp)
		E_Alloc(NULL, GameTextures);
	while (Line[++IndexLine] && IndexRGB < 3)
	{
		if (ft_isdigit(Line[IndexLine]) && IndexTmp < 3)
			tmp[IndexTmp++] = Line[IndexLine];
		else if (ft_strlen(tmp) > 0)
		{
			extractNumber(GameTextures, &tmp, &IndexRGB, CorF);
			IndexTmp = 0;
		}
	}
	free(tmp);
}
