/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:09:08 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 19:22:37 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERALERRORS_H
	#define GENERALERRORS_H

// General error code definitions (1 - 10 reserved)
typedef enum s_GeneralErrorCodes
{
	Standard = 1,
	AllocFail = 2,
}	GeneralErrorCodes;

void	E_Alloc(Map *GameMap, Textures *GameTextures);

#endif
