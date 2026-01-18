/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:46:36 by hkullert          #+#    #+#             */
/*   Updated: 2025/01/15 20:42:23 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_decide(char const c, va_list args)
{
	int	count;

	count = 0;
	if (ft_check(c) != 0)
		return (1);
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		count = ft_putint(va_arg(args, int));
	if (c == 'x')
		count = ft_putx(va_arg(args, int));
	if (c == 'X')
		count = ft_putbigx(va_arg(args, int));
	if (c == 'u')
		count = ft_putuns(va_arg(args, int));
	if (c == 'p')
		count = ft_putpointer(va_arg(args, unsigned long));
	return (count);
}
