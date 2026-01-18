/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:07:09 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 20:19:15 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ParsingErrors.h"

void	FileCheck(char *MapPath)
{
	int	PathLenght;

	PathLenght = ft_strlen(MapPath);
	if (ft_strcmp(MapPath + (PathLenght - 4), ".cub"))
		FileError();
}
