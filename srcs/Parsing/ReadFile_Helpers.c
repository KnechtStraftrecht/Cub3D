/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile_Helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:54:45 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 22:14:21 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

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
