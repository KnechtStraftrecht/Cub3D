/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:02:23 by hkullert          #+#    #+#             */
/*   Updated: 2024/11/26 00:02:25 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// s+l = "lo\0", i = 7, l = 5
// ft_strlcpy(arr[j], s + l, i - l + 1);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!size)
		return (len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}

// int	main(void)
// {
// 	printf(ft_strlcpy(dest, "lorem ipsum", 3));
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// }
