/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hans.kuellertz <hans.kuellertz@student.42.fr>  #+#  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-17 08:51:07 by hans.kuellertz    #+#    #+#             */
/*   Updated: 2025-02-17 08:51:07 by hans.kuellertz   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrstr(char *str, char *seek, int n)
{
	int	i;
	int	c;

	i = ft_strlen_solong(str);
	c = ft_strlen_solong(seek);
	while (i > 0 && i > ft_strlen_solong(str) - n)
	{
		while (str[i] == seek[c])
		{
			i--;
			c--;
			if (c == 0)
				return (1);
		}
		if (c < ft_strlen_solong(seek))
		{
			i = i + ft_strlen_solong(seek) - (c + 1);
			c = ft_strlen_solong(seek);
		}
		i--;
	}
	return (0);
}
