/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:28:35 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 20:23:04 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGERRORS_H
	#define PARSINGERRORS_H

#include <stdlib.h>

typedef enum s_ErrorCodes
{
	FileError = 21,
}	ErrorCodes;

void	FileError(void);

#endif
