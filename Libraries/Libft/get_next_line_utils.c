/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:23:46 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/30 22:19:33 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_gnl(char *s, int c)
{
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup_gnl(const char *str)
{
	int		i;
	char	*sdup;

	if (!str)
		return (NULL);
	i = 0;
	sdup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!sdup)
		return (0);
	while (str[i])
	{
		sdup[i] = str[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		k;
	char	*str;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	k = -1;
	while (s2[++k])
		str[i + k] = s2[k];
	str[i + k] = '\0';
	return (str);
}

char	*ft_strjoin_gnl_og(char *s1, char *s2)
{
	int		i;
	int		k;
	char	*str;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	k = -1;
	while (s2[++k])
		str[i + k] = s2[k];
	str[i + k] = '\0';
	free(s1);
	return (str);
}
