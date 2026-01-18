/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:02:06 by hkullert          #+#    #+#             */
/*   Updated: 2025/04/06 23:48:38 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *str)
{
	int		i;
	int		len;
	char	*sdup;

	if (!str)
		return (NULL);
	i = 0;
	len = ft_strlen_solong(str);
	sdup = (char *)malloc(sizeof(char) * (len + 1));
	if (!sdup)
		return (0);
	while (i < len)
	{
		sdup[i] = str[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

// int	main()
// {
// 	const char a[] = "Hallo";

// 	printf("%s", ft_strdup(a));
// 	return (0);
// }
