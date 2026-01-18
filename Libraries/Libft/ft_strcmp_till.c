/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_till.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:57:09 by paul              #+#    #+#             */
/*   Updated: 2025/07/27 15:20:04 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp_till(const char *s1, const char *s2, char c)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != c && s2[i] != c)
		i++;
	if (s1[i] == c || s2[i] == c)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
