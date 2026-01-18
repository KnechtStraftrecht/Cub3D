/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrandes <pbrandes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:12:48 by pbrandes          #+#    #+#             */
/*   Updated: 2025/07/27 19:12:56 by pbrandes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_table(char **table, int fd)
{
	size_t	row;

	row = 0;
	if (!table || !table[0])
		return ;
	while (table[row])
	{
		ft_putstr_fd(table[row], fd);
		ft_putchar_fd('\n', fd);
		row++;
	}
}
