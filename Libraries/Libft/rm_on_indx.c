/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rm_on_indx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:58:43 by hkullert          #+#    #+#             */
/*   Updated: 2025/07/27 14:59:45 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rm_on_indx(char *str, int rm_indx)
{
	char	*res;
	int		indx;

	indx = 0;
	res = malloc(sizeof(char) * ft_strlen(str));
	while (indx < rm_indx)
	{
		res[indx] = str[indx];
		indx++;
	}
	while (str[indx + 1])
	{
		res[indx] = str[indx + 1];
		indx++;
	}
	res[indx] = '\0';
	return (res);
}
