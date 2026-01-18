/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_solong.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hans.kuellertz <hans.kuellertz@student.42.fr>  #+#  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-17 09:42:40 by hans.kuellertz    #+#    #+#             */
/*   Updated: 2025-02-17 09:42:40 by hans.kuellertz   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_chr(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}
