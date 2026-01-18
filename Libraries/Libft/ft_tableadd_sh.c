/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tableadd_sh.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:05:27 by hkullert          #+#    #+#             */
/*   Updated: 2025/06/29 17:59:02 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tableadd_sh(char **table, char *add)
{
	int		len;
	char	**new;

	if (!add)
		return (table);
	len = ft_tablen(table);
	new = malloc(sizeof(char *) * (len + 2));
	len = 0;
	if (table)
	{
		while (table[len])
		{
			new[len] = ft_strdup(table[len]);
			len++;
		}
	}
	new[len] = add;
	new[len + 1] = NULL;
	free_double_ptr(table);
	return (new);
}
