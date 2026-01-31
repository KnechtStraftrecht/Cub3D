/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrAlterAr1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:54:16 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/31 22:11:37 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Passes str to function f with argument set, replaces str with altered version
void	StrAlterAr1(char **str, char*(*f)(char *, char *), char *set)
{
	char	*tmp;

	tmp = f((*str), set);
	free((*str));
	(*str) = tmp;
}
