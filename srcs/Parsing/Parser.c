/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:24 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 20:59:53 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

void	MapFileParser(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	FileCheck(MapPath);
	ReadFile(MapPath, GameMap, GameTextures);
	MapCheck(GameMap);
	TextureCheck(GameTextures);
}
