/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:37:48 by hkullert          #+#    #+#             */
/*   Updated: 2024/11/22 17:38:53 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoacalc(char *res, int n, int neg, int i)
{
	int	j;

	if (neg == 1)
		res[0] = '-';
	j = i;
	if (n == -2147483648)
	{
		res[i] = 56;
		i--;
		n = n / 10;
		n = n * -1;
	}
	while (n > 9)
	{
		res[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	res[i] = n + 48;
	res[j + 1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		neg;
	char	*res;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	j = n;
	while (j > 9)
	{
		j = j / 10;
		i++;
	}
	if (n == -2147483648)
		i = 9;
	res = malloc(sizeof(char) * i + 2 + neg);
	if (!res)
		return (NULL);
	res = ft_itoacalc(res, n, neg, i + neg);
	return (res);
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }
