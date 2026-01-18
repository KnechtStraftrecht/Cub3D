/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dup_from.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrandes <pbrandes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:52:37 by pbrandes          #+#    #+#             */
/*   Updated: 2025/07/11 18:08:39 by pbrandes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_dup_from(char *str, char c)
{
	int		i;
	char	*sdup;

	if (!str)
		return (NULL);
	while (*str && *str != c)
		str++;
	if (*str == c)
		str++;
	sdup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!sdup)
		return (0);
	i = 0;
	while (str[i])
	{
		sdup[i] = str[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
