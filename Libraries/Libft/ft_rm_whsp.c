/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_whsp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:37:02 by hkullert          #+#    #+#             */
/*   Updated: 2025/06/27 16:17:38 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	iter(char *input, size_t i)
{
	if ((input[i]) && ((i == 0 && ft_iswhsp(input[i]))
			|| (i == ft_strlen(input) - 1 && ft_iswhsp(input[i]))
			|| (ft_iswhsp(input[i]) && ft_iswhsp(input[i - 1]))))
		return (1);
	return (0);
}

void	ft_rm_whsp(char *input)
{
	size_t	i;
	size_t	j;
	int		quotes;
	int		og;

	i = 0;
	j = 0;
	og = ft_count_chr(input, '"');
	og += ft_count_chr(input, '\'');
	quotes = 0;
	while (input[i])
	{
		if (input[i] == '"' || input[i] == '\'')
			quotes++;
		if ((quotes == 0 || quotes == og) && (input[i] != '"'
				|| input[i] != '\'') && iter(input, i))
			i++;
		else if (input[i])
		{
			input[j] = input[i];
			j++;
			i++;
		}
	}
	input[j] = '\0';
}
