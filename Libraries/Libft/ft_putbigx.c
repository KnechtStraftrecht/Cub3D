/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbigx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:26:20 by hkullert          #+#    #+#             */
/*   Updated: 2025/01/15 20:38:54 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putbigx(unsigned int n)
{
	int		i;
	int		count;
	char	res[16];
	char	*hexadecimal;

	i = 0;
	count = 0;
	hexadecimal = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		res[i++] = hexadecimal[n % 16];
		n = n / 16;
	}
	while (i > 0)
	{
		i--;
		count = count + ft_putchar(res[i]);
	}
	return (count);
}
