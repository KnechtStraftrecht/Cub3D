/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TableAddBack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:30:38 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/19 18:38:02 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	TableAddBack(char ***table, char *str)
{
	char	**table_new;
	int		Index;

	if (!table || !str)
		return (-1);
	table_new = malloc(sizeof(char *) * ft_tablen(table) + 2);
	if (!table_new)
		return (-1);
	while (*table[Index])
	{
		table_new[Index] = *table[Index];
		Index++;
	}
	table_new[Index++] = ft_strdup(str);
	table_new[Index] = NULL;
	free(*table);
	*table = table_new;
	return (0);
}
