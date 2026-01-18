/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabledup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:33:26 by hkullert          #+#    #+#             */
/*   Updated: 2025/06/29 19:20:30 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabledup(char **table)
{
	int		x;
	int		len;
	char	**cpy;

	if (!table)
		return (NULL);
	x = 0;
	len = ft_tablen(table);
	cpy = malloc(sizeof(char *) * (len + 1));
	while (table[x])
	{
		cpy[x] = ft_strdup(table[x]);
		x++;
	}
	cpy[x] = NULL;
	return (cpy);
}
