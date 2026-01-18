/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_from.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 07:03:01 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/04 07:27:17 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Appends str2 to str1, starting the copy from "start", overwriting everthing.
// Stops append completely after end of str2 is reached and returns res.
// res will be malloced to have the capacity start + strlen for str2.
// !!! Does not free any of its arguments !!!
char	*ft_app_from(char *str1, char *str2, int start)
{
	char	*res;
	int		i;
	int		j;

	if (!str1 || !str2 || start < 0)
		return (NULL);
	res = malloc(ft_strlen(str2) + start + 1);
	i = -1;
	while (++i < start)
		res[i] = str1[i];
	j = -1;
	while (str2[++j])
	{
		res[i] = str2[j];
		i++;
	}
	res[i] = '\0';
	return (res);
}
