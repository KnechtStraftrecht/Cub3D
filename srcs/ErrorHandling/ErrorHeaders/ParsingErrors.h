/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:28:35 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 21:49:41 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGERRORS_H
	#define PARSINGERRORS_H

#include <stdlib.h>

typedef enum s_ErrorCodes
{
	FileExtension = 21,
	MapCantOpen = 22,
}	ErrorCodes;

void	E_FileExtension(void);
void	E_MapCantOpen(void);

#endif
