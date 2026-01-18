/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:50:07 by hkullert          #+#    #+#             */
/*   Updated: 2025/10/06 16:16:40 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes string in tab[pos] from table
// Overwrites tab with cleaned result
// Frees tab
void	ft_tabdel(char ***tab, int pos)
{
	char	**res;
	char	**tmp;
	int		i;

	if (!*tab)
		return ;
	tmp = *tab;
	res = malloc(sizeof(char *) * ft_tablen(tmp));
	if (!res)
		return ;
	i = -1;
	while (tmp[++i] && i < pos)
		res[i] = ft_strdup(tmp[i]);
	while (tmp[++pos])
		res[i++] = ft_strdup(tmp[pos]);
	res[i] = NULL;
	free_double_ptr(tmp);
	tmp = res;
	*tab = tmp;
}
