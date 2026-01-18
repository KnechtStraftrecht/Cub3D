/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:07:13 by hkullert          #+#    #+#             */
/*   Updated: 2025/05/16 12:51:42 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str = "Hallo1";
// 	int		c = 48;
// 	int		i = 0;
// 	void	*res = ft_memchr(str, c, 6);

// 	while (((char *)res)[i] != '\0')
// 	{
// 		write(1, &((char *)res)[i], 1);
// 		i++;
// 	}
// 	return (0);
// }
