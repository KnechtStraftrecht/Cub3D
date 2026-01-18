/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_bc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:56:50 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/11 16:05:22 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cut_bc(char *str, char c, int start)
{
	char	*res;
	int		i;

	i = 0;
	while (str[start + i] && str[start + i] != c)
		i++;
	res = malloc(i + 1);
	i = 0;
	while (str[start] && str[start] != c)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}
