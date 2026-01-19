/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:24 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:34:03 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

// Responsible for entire parsing, checking and validating of input file
void	InputFileParser(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	FileCheck(MapPath);
	ReadFile(MapPath, GameMap, GameTextures);
	// MapCheck(GameMap);
	// TextureCheck(GameTextures);
}
