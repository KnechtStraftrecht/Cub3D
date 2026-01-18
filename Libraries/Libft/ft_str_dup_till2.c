/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dup_till2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:19:39 by pbrandes          #+#    #+#             */
/*   Updated: 2025/10/05 18:47:32 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_dup_till2(char *str, char c)
{
	int		i;
	int		len;
	char	*sdup;

	if (!str || *str == '\0')
		return (NULL);
	len = 1;
	while (str[len] && str[len] != c)
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
