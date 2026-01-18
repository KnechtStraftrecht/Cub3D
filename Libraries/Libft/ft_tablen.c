/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:35:35 by hkullert          #+#    #+#             */
/*   Updated: 2025/06/16 21:03:49 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tablen(char **table)
{
	int	len;

	if (!table)
		return (0);
	len = 0;
	while (table[len])
		len++;
	return (len);
}
