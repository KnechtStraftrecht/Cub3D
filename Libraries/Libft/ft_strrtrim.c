/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:13:14 by hkullert          #+#    #+#             */
/*   Updated: 2025/10/05 19:45:25 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrtrim(char *str, char *set)
{
	char	*res;
	int		i;
	int		j;

	i = ft_strlen(str) - 1;
	j = -1;
	while (i > 0 && ft_strchr(set, str[i]))
		i--;
	res = malloc(sizeof(char) * (i + 2));
	if (!res)
		return (NULL);
	while (str[++j] && j <= i)
		res[j] = str[j];
	res[j] = '\0';
	return (res);
}
