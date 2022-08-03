/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:21:44 by nloisy            #+#    #+#             */
/*   Updated: 2022/07/31 23:08:30 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "includes.h"
#define BUF_SIZE 400

char	*ft_strdup(char *str);

char	*ft_resetstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

int	ft_skipchar(char *str, int index)
{
	int	i;

	i = index;
	while (str[i] == ' ' || str[i] == ':')
		i++;
	return (i);
}

char	*ft_split(char *buffer, int *index, char *string, int mode)
{
	int		i;

	i = 0;
	if (mode == 1)
	{
		while (buffer[*index] != ':' && buffer[*index] != ' ')
		{
			string[i] = buffer[*index];
			i++;
			*index += 1;
		}
	}
	else if (mode == 2)
	{
		while (buffer[*index] != '\n')
		{
			string[i] = buffer[*index];
			i++;
			*index += 1;
		}
		*index += 1;
	}
	return (string);
}

void	ft_parse(char ****numbers)
{
	int		fd;
	int		j;
	int		z;
	char	buffer[BUF_SIZE];
	char	*str;

	z = 0;
	j = 0;
	str = malloc(BUF_SIZE);
	fd = open("numbers.dict", O_RDONLY);
	*numbers = malloc(ft_sizefile() * sizeof(char **));
	while (read(fd, buffer, BUF_SIZE))
	{
		while (j == 0 || ft_atoi((*numbers)[j - 1][0]) != 1000000000)
		{
			(*numbers)[j] = malloc(2 * sizeof(char *));
			(*numbers)[j][0] = ft_strdup(ft_split(buffer, &z, str, 1));
			ft_resetstr(str);
			z = ft_skipchar(buffer, z);
			(*numbers)[j][1] = ft_strdup(ft_split(buffer, &z, str, 2));
			ft_resetstr(str);
			j++;
		}
	}
	free(str);
}
