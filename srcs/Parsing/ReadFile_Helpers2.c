/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile_Helpers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:47:09 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 21:08:42 by hkullert         ###   ########.fr       */
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

// Extracts RGB values in "Line" to "Textures" struct
void	extractRGBs(Textures *GameTextures, char *Line)
{
	int	IndexLine;

	IndexLine = 0;
	
}
