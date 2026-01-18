/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:43:42 by hkullert          #+#    #+#             */
/*   Updated: 2025/01/15 20:39:13 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnbr(int c);

int	ft_putuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putuns(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
