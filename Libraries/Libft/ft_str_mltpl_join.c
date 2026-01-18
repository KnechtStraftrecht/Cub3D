/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_mltpl_join.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:45:40 by hkullert          #+#    #+#             */
/*   Updated: 2025/06/08 20:30:27 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_mltpl_join(int nb, ...)
{
	char	*dst;
	va_list	args;

	va_start(args, nb);
	dst = NULL;
	while (nb > 0)
	{
		dst = ft_strjoin_gnl(dst, va_arg(args, char *));
		nb--;
	}
	va_end(args);
	va_start(args, nb);
	free(va_arg(args, char *));
	va_end(args);
	return (dst);
}
