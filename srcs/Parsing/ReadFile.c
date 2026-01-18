/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:03 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 21:37:00 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"
#include "libft.h"

void	ReadTextures(char *MapPath, Textures *GameTextures)
{
	char	*tmp;
	
}

void	ReadFile(char *MapPath, Map *GameMap, Textures *GameTextures)
{
	ReadTextures(MapPath, GameTextures);
	ReadMap(MapPath, GameMap);
}
