/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:52:05 by hkullert          #+#    #+#             */
/*   Updated: 2025/10/05 19:16:06 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (*s1 && *set)
	{
		while (ft_strchr(set, s1[i]))
			i++;
		while (ft_strchr(set, s1[j - 1]))
			j--;
	}
	return (ft_substr(s1, i, j - i));
}

// int	main(void)
// {
// 	char	*s = "lorem ipsum dolor sit amet";

// 	printf("%s", ft_strtrim(s, "tel"));
// 	return (0);
// }
