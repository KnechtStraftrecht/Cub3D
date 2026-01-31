/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:43:54 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/31 22:22:18 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Replaces every instance of repl in str with set
void	StrReplace(char **str, char repl, char *set)
{
	int		Index;
	int		IndexTmp;
	int		IndexSet;
	size_t	AllocSize;
	char	*tmp;

	Index = 0;
	IndexSet = 0;
	IndexTmp = 0;
	AllocSize = ft_strlen((*str)) + 1 + (ft_count_chr((*str), repl) * ft_strlen(set));
	tmp = ft_calloc(AllocSize, sizeof(char));
	while((*str)[Index])
	{
		if ((*str)[Index] == repl)
		{
			while (set[IndexSet])
				tmp[IndexTmp++] = set[IndexSet++];
			IndexSet = 0;
			Index++;
		}
		else
			tmp[IndexTmp++] = (*str)[Index++];
	}
	free((*str));
	(*str) = tmp;
}
