/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:21:16 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 20:57:39 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
	#define PARSING_H

#include "Map.h"
#include "Textures.h"
#include "ParsingErrors.h"
#include "GeneralErrors.h"
#include "libft.h"

void	InputFileParser(char *MapPath, Map *GameMap, Textures *GameTextures);
int		MapStart(char *FileSnippet);
int		TexturesFilled(Textures *Textures);
int		isEmpty(char *str);

#endif
