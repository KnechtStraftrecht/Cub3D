/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:21:16 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 22:14:46 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
	#define PARSING_H

#include "../GeneralHeaders/Map.h"
#include "../GeneralHeaders/Textures.h"
#include "ParsingErrors.h"
#include "libft.h"

int	MapStart(char *FileSnippet);
int	TexturesFilled(Textures *Textures);

#endif
