/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile_Helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:54:45 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 20:46:52 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

// Checks whether the input line "FileSnippet" from the ".cub" file
// marks the start of the map definition part
int	MapStart(char *FileSnippet)
{
	int	Index;

	Index = 0;
	while (FileSnippet[Index] && ft_iswhsp(FileSnippet[Index]))
		Index++;
	if (!FileSnippet[Index]
		|| FileSnippet[Index] == 'N'
		|| FileSnippet[Index] == 'S'
		|| FileSnippet[Index] == 'O'
		|| FileSnippet[Index] == 'W'
		|| FileSnippet[Index] == 'C'
		|| FileSnippet[Index] == 'F'
		|| FileSnippet[Index] == '\n')
		return (0);
	return (1);
}

// Checks if the "Textures" struct has completely been filled
int	TexturesFilled(Textures *Textures)
{
	if (Textures->PathNorth
		&& Textures->PathSouth
		&& Textures->PathEast
		&& Textures->PathWest
		&& (Textures->CeilingColor[0] > -1
		|| Textures->CeilingColor[1] > -1
		|| Textures->CeilingColor[2] > -1)
		&& (Textures->FloorColor[0] > -1
		|| Textures->FloorColor[1] > -1
		|| Textures->FloorColor[2] > -1))
		return (1);
	return (0);
}

// Checks if the input line "str" is empty or not
int	isEmpty(char *str)
{
	int	Index;

	Index = 0;
	while (str[Index] && ft_iswhsp(str[Index]))
		Index++;
	return (!str[Index]);
}

// Checks if the input line "line" from the ".cub" file is
// a texture configuration line
int	isConfig(char *line)
{
	int	Index;

	Index = 0;
	while (line[Index] && ft_iswhsp(line[Index]))
		Index++;
	if (line[Index]
		&& (line[Index] == 'N'
		|| line[Index] == 'S'
		|| line[Index] == 'E'
		|| line[Index] == 'W'
		|| line[Index] == 'F'
		|| line[Index] == 'C'))
		return (1);
	return (0);
}

// Extracts the texture config in the input line "line" from
// the ".cub" file to the "Textures" struct passed
void	CopyConfig(char *line, Textures *GameTextures)
{
	int	Index;

	Index = 0;
	while (ft_iswhsp(line[Index]))
		Index++;
	if (line[Index] == 'N'
		|| line[Index] == 'S'
		|| line[Index] == 'E'
		|| line[Index] == 'W')
		extractTexturePath(GameTextures, line + (Index + 1));
	else
		extractRGB(GameTextures, line + (Index + 1));
}
