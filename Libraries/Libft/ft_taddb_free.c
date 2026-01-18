/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taddb_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:05:17 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/10 17:05:49 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_taddb_free(char **table, char const *add)
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
	free(table);
	return (new);
}
