/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_src3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:19:20 by cglandus          #+#    #+#             */
/*   Updated: 2022/07/31 22:44:04 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "includes.h"

int	ft_sizefile(void)
{
	int		fd;
	int		j;
	char	buffer[1];

	j = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, buffer, 1))
	{
		if (buffer[0] == '\n')
			j++;
	}
	close (fd);
	return (j);
}

int	ft_atoi2(char *nb)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (nb[i] < '0' || nb[i] > '9')
		i++;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		result = result * 10 + (nb[i] - '0');
		i++;
	}
	return (result);
}

char	*ft_strdup(char *src)
{
	char	*dupstr;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dupstr = malloc((i * sizeof(char)) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dupstr[i] = src[i];
		i++;
	}
	return (dupstr);
}
