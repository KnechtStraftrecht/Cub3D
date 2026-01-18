/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:27:49 by hkullert          #+#    #+#             */
/*   Updated: 2025/01/15 20:39:07 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putpointer(unsigned long n)
{
	int				i;
	int				count;
	char			res[16];
	char			*hexadecimal;

	if (n == 0)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	i = 0;
	count = 2;
	hexadecimal = "0123456789abcdef";
	while (n > 0)
	{
		res[i] = hexadecimal[n % 16];
		i++;
		n = n / 16;
	}
	while (i > 0)
	{
		i--;
		count = count + ft_putchar(res[i]);
	}
	return (count);
}
