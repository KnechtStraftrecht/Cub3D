/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tableadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:40:49 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/11 14:10:35 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tableadd_back(char **table, char const *add)
{
	char	**new;
	int		len;
	int		i;

	if (!add)
		return (table);
	len = ft_tablen(table);
	new = malloc(sizeof(char *) * (len + 2));
	i = 0;
	if (table)
	{
		while (table[i])
		{
			new[i] = ft_strdup(table[i]);
			i++;
		}
	}
	new[len] = ft_strdup(add);
	new[len + 1] = NULL;
	return (new);
}
