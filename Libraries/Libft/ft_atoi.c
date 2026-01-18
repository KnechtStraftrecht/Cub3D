/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:01:10 by hkullert          #+#    #+#             */
/*   Updated: 2024/11/26 00:01:12 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str [i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
// #include <stdio.h>

// int main()
// {;
// 	printf("%d",ft_atoi("0"));
// 	printf("%s", "\n");
// 	printf("%d",ft_atoi("-10"));
// 	printf("%s", "\n");
// 	printf("%d",ft_atoi("10"));
// 	printf("%s", "\n");
// 	printf("%d",ft_atoi("-2673673"));
// 	printf("%s", "\n");
// 	printf("%d",ft_atoi("2147483647"));
// 	printf("%s", "\n");
// 	printf("%d",ft_atoi("-2147483648"));
// 	printf("%s", "\n");
// 	return (0);
// }
