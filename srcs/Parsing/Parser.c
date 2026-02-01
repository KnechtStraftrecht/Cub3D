/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:24 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 20:19:05 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

// Responsible for entire parsing, checking and validating of input file
void	InputFileParser(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	FileCheck(MapPath);
	ReadFile(MapPath, GameMap, GameTextures);
	TextureCheck(GameTextures, GameMap);
	// MapCheck(GameMap);
}
