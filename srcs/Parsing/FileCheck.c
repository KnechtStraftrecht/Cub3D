/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:09 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/20 15:01:03 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.h"

// Checks if the file extension of the file passed is ".cub"
void	FileCheck(char *MapPath)
{
	int	PathLenght;

	PathLenght = ft_strlen(MapPath);
	if (ft_strcmp(MapPath + (PathLenght - 4), ".cub"))
		E_FileExtension();
}
