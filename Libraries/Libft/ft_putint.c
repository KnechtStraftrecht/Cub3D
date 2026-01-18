/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:26:21 by hkullert          #+#    #+#             */
/*   Updated: 2025/01/15 20:39:03 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnbr(int c);

int	ft_putint(int n)
{
	int	count;

	count = ft_countnbr(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count++;
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putint(n / 10);
	ft_putchar(n % 10 + '0');
	return (count);
}
