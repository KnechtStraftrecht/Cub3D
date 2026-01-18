/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:40:22 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/16 20:55:04 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Joins t1 and t2 together, t2 will be inserted into t1[pos]
// If del is set to 1, t1[pos] will be overwritten
// !!! Overwrites t1 with the joined result !!!
void	ft_tabjoin(char **t1, char **t2, int pos, int del)
{
	char	**res;
	int		i;
	int		j;

	i = -1;
	if (!t1 || !t2 || pos < 0 || pos > ft_tablen(t1))
		return ;
	res = malloc(sizeof(char *) * (ft_tablen(t1) + ft_tablen(t2) + 1));
	if (!res)
		return ;
	while (t1[++i] && i < pos)
		res[i] = ft_strdup(t1[i]);
	if (del != 1)
	{
		res[i] = ft_strdup(t1[i]);
		i++;
	}
	j = -1;
	while (t2[++j])
		res[i++] = ft_strdup(t2[j]);
	i++;
	res[i] = NULL;
	free_double_ptr(t1);
	t1 = res;
}
