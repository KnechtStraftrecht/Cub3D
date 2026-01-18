/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:35:04 by hkullert          #+#    #+#             */
/*   Updated: 2025/01/15 20:38:39 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	ret = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret = ret + ft_decide(format[i + 1], args);
			i = i + 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			ret++;
		}
	}
	return (ret);
}

// int	main(void)
// {
// 	int		i;
// 	char	*s = "Hello";

// 	i = ft_printf(" %p \n", -1);
// 	ft_printf("ret = %i\n", i);
// 	ft_printf("NULL ret = %p\n", NULL);

// 	printf("printf count = %i", printf(" %p \n", (void*)-1));
// 	// printf("%i", printf("Hello string = %s\n", s));
// 	return (0);
// }
