/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_til_cwc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrandes <pbrandes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 20:30:14 by paul              #+#    #+#             */
/*   Updated: 2025/09/12 19:29:54 by pbrandes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cut_til_cwc(char *str, char c)
{
	int		start;
	int		indx;
	char	*cut_str;

	if (!str || !c)
		return (NULL);
	start = 0;
	while (str[start] && str[start] != c)
		start++;
	if (!str[start])
		return (NULL);
	start++;
	indx = start;
	while (str[indx])
		indx++;
	cut_str = malloc(sizeof(char) * (indx - start) + 1);
	indx = 0;
	while (str[start])
		cut_str[indx++] = str[start++];
	cut_str[indx] = '\0';
	return (cut_str);
}
