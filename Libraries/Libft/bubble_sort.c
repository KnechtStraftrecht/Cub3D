/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrandes <pbrandes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:19:33 by pbrandes          #+#    #+#             */
/*   Updated: 2025/07/27 16:25:53 by pbrandes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**bubble_sort(char **table)
{
	int		swapped;
	size_t	idx;
	char	*tmp;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		idx = 0;
		while (table[idx + 1])
		{
			if (ft_strcmp_till(table[idx], table[idx + 1], '=') > 0)
			{
				tmp = table[idx];
				table[idx] = table[idx + 1];
				table[idx + 1] = tmp;
				swapped = 1;
			}
			idx++;
		}
	}
	return (table);
}
