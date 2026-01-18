/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dup_till.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:55:23 by paul              #+#    #+#             */
/*   Updated: 2025/06/08 20:30:39 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_dup_till(char *str, char c)
{
	int		i;
	int		len;
	char	*sdup;

	if (!str)
		return (NULL);
	len = 1;
	while (str[len] && str[len] != c)
		len++;
	if (str[len] == c)
		len++;
	sdup = (char *)malloc(sizeof(char) * (len + 1));
	if (!sdup)
		return (0);
	i = 0;
	while (i < len)
	{
		sdup[i] = str[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
