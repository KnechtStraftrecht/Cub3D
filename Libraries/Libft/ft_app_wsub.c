/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_wsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 06:50:03 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/04 07:02:36 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Appends two null terminated strings together, placing the string c inbetween.
// !!! Does not free any of its arguments !!!
char	*ft_app_wsub(char *str1, char *str2, char *c)
{
	char	*res;

	if (!str1 || ! str2 || !c)
		return (NULL);
	res = malloc(ft_strlen(str1) + ft_strlen(str2) + ft_strlen(c) + 1);
	ft_strlcpy(res, str1, ft_strlen(str1));
	ft_app_from(res, c, ft_strlen(str1));
	ft_app_from(res, c, ft_strlen(str1) + ft_strlen(c));
	res[ft_strlen(str1) + ft_strlen(str2) + ft_strlen(c)] = '\0';
	return (res);
}
