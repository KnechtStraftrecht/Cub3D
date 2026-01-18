/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:23:43 by hkullert          #+#    #+#             */
/*   Updated: 2025/09/30 22:20:12 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*makeres(char *res)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!res)
		return (NULL);
	while (res[i] != '\n' && res[i] != '\0')
		i++;
	if (res[i] == '\0')
	{
		free (res);
		return (NULL);
	}
	i++;
	tmp = (ft_strdup(&res[i]));
	if (!tmp || !ft_strcmp(tmp, ""))
	{
		free(res);
		free(tmp);
		return (NULL);
	}
	free (res);
	return (tmp);
}

char	*extract_line(char *res)
{
	int		i;
	char	*line;

	if (!res || !res[0])
		return (NULL);
	i = 0;
	while (res[i] && res[i] != '\n')
		i++;
	if (res[i] == '\n')
		i++;
	line = malloc((1 + i) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (res[i] && res[i] != '\n')
	{
		line[i] = res[i];
		i++;
	}
	if (res[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*readfile(int fd, char *res)
{
	int		bytes_read;
	char	*tmp;

	tmp = malloc (BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr_gnl(res, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, tmp, BUFFER_SIZE);
		if (bytes_read == -1 || !tmp)
		{
			free(tmp);
			free(res);
			return (NULL);
		}
		tmp[bytes_read] = '\0';
		res = ft_strjoin_gnl_og(res, tmp);
		if (!res)
			return (NULL);
	}
	free(tmp);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*res;
	char		*tmp;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	res = readfile(fd, res);
	if (!res)
		return (NULL);
	tmp = extract_line(res);
	res = makeres(res);
	return (tmp);
}

// int	main(int ac, char **av)
// {
// 	int		fd;
// 	int		i;
// 	char	*line;

// 	i = 1;
// 	if (ac < 2)
// 	{
// 		printf("Error, too few Arguments!\n");
// 		return (0);
// 	}
// 	fd = open(av[1], O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("Error opening file!\n");
// 		return (0);
// 	}
// 	while (((line = get_next_line(fd)) && (line != NULL)))
// 	{
// 		printf("Line %i = %s", i, line);
// 		printf("strlen  of line %i = %li\n", i, ft_strlen(line));
// 		free (line);
// 		i++;
// 	}
// 	return (0);
// }
