/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:21:26 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 20:18:48 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ErrorHeaders/ParsingErrors.h"

void	FileError(void)
{
	printf("File extension has to be \".cub\"");
	exit(21);
}
