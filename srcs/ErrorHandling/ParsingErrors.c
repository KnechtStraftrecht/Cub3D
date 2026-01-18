/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParsingErrors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:21:26 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 21:48:57 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ErrorHeaders/ParsingErrors.h"

void	E_FileExtension(void)
{
	printf("Error\n");
	printf("File extension has to be \".cub\"\n");
	exit(FileExtension);
}

void	E_MapCantOpen(void)
{
	printf("Error\n");
	printf("Map file cannot be opened!\n");
	exit(MapCantOpen);
}
