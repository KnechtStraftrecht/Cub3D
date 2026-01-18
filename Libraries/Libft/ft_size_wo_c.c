/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_wo_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:43:24 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/04 16:45:53 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size_wo_c(char *str, char c)
{
	int		i;
	int		chr;

	i = 0;
	chr = 0;
	while (str[i])
	{
		if ((i == 0 && str[i] == c)
			|| (i == ft_strlen_solong(str) - 1 && str[i] == c)
			|| (i > 0 && str[i] == c && str[i - 1] == c))
			i++;
		else
		{
			chr++;
			i++;
		}
	}
	return (chr);
}
