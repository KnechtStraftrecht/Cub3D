/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:40:17 by paul              #+#    #+#             */
/*   Updated: 2025/06/06 15:32:28 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *str, int n)
{
	int		i;
	char	*sdup;

	if (!str)
		return (NULL);
	i = 0;
	sdup = (char *)malloc(sizeof(char) * (n + 1));
	if (sdup == NULL)
		return (NULL);
	while (i < n)
	{
		sdup[i] = str[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
