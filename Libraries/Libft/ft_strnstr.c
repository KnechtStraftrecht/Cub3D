/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:02:41 by hkullert          #+#    #+#             */
/*   Updated: 2024/11/26 00:02:43 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&(big[i]));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*big = "lorem ipsum dolor sit amet";
// 	char	*little = "";

// 	printf("%s", ft_strnstr(big, little, 10));
// 	return (0);
// }
