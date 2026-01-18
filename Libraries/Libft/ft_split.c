/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:14:58 by hkullert          #+#    #+#             */
/*   Updated: 2025/03/24 01:11:35 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check0(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	if (i == ft_strlen(s))
		return (1);
	return (0);
}

// void	*ft_iffucked(char **arr, int j)
// {
// 	while (j > 0)
// 		free(arr[--j]);
// 	return (NULL);
// }

void	*ft_iffucked(char **arr)
{
	unsigned int	j;

	j = 0;
	while (arr[j])
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}

char	**ft_indsplit(char **arr, char *str, char delim, int wordcount)
{
	int		indx;
	int		y;
	int		wordstart;

	indx = 0;
	y = 0;
	while (y < wordcount)
	{
		while (str[indx] && str[indx] == delim)
			indx++;
		wordstart = indx;
		while (str[indx] && str[indx] != delim)
			indx++;
		if (indx > wordstart)
		{
			arr[y] = malloc(sizeof(char) * (indx - wordstart + 1));
			if (!arr[y])
				return (ft_iffucked(arr));
			ft_strlcpy(arr[y], str + wordstart, indx - wordstart + 1);
			y++;
		}
	}
	arr[y] = NULL;
	return (arr);
}

int	ft_wordcount(char *s, int c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char *s, char c)
{
	int		j;
	char	**arr;

	j = ft_wordcount(s, c);
	arr = malloc(sizeof(char *) * (j + 1));
	if (!arr)
		return (NULL);
	if (ft_check0(s, c) > 0)
	{
		arr[0] = NULL;
		return (arr);
	}
	if (!s)
		return (NULL);
	arr[j] = NULL;
	return (ft_indsplit(arr, s, c, j));
}
