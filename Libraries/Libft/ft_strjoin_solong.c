/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_solong.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:51:05 by hkullert          #+#    #+#             */
/*   Updated: 2025/06/20 17:41:36 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_solong(char *s1, char *s2)
{
	char	*res;

	if (!s2 && s1)
		return (s1);
	if (!s1 && s2)
	{
		return (ft_strdup(s2));
	}
	if (!s1 && !s2)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcpy(res + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (res);
}
