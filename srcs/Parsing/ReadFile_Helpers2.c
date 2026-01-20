/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile_Helpers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:47:09 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/20 14:40:49 by hkullert         ###   ########.fr       */
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

// Copies the parsed RGB values into Textures struct
// (Helper function)
int	CopyRGB(Textures *GameTextures, char *RGB, char CorF, int IndexRGB)
{
	int	Index;

	Index = -1;
	if (isEmpty(RGB))
		return (TextureConfMissing);
	while (RGB[++Index])
		if (!ft_isdigit(RGB[Index]))
			return (InvalidTextures);
	if (CorF == 'F')
		GameTextures->FloorColor[IndexRGB] = ft_atoi(RGB);
	else
		GameTextures->CeilingColor[IndexRGB] = ft_atoi(RGB);
	return (0);
}

// Parses and writes RGB values from ".cub" File into Textures struct
// (Helper funtion)
int	getValues(Textures *GameTextures, char *Line, char CorF)
{
	char	**Values;
	int		IndexRGB;
	int		Error;

	Values = ft_split(Line, ',');
	IndexRGB = 0;
	while (IndexRGB < 3)
	{
		if (ft_strlen(Values[IndexRGB]) > 3)
			return (InvalidTextures);
		Error = CopyRGB(GameTextures, Values[IndexRGB], CorF, IndexRGB);
		if (Error > 0)
			return (Error);
		IndexRGB++;
	}
	free_double_ptr(Values);
	return (0);
}

// Extracts RGB values in "Line" to "Textures" struct
void	extractRGBs(Textures *GameTextures, char *Line)
{
	char	CorF;
	int		IndexLine;
	int		Error;

	IndexLine = 0;
	CorF = Line[IndexLine];
	while (Line[IndexLine] && !ft_isdigit)
		IndexLine++;
	Error = getValues(GameTextures, Line +IndexLine, CorF);
	if (Error == AllocFail)
		E_Alloc(NULL, GameTextures);
	if (Error == TextureConfMissing)
		E_TextureConfigM();
	if (Error == InvalidTextures)
		E_InvalidTextures();
}
