/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:15:39 by nmorandi          #+#    #+#             */
/*   Updated: 2022/07/24 11:15:41 by nmorandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_space_len(char *str, int argc)
{
	int	i;
	int	space;

	space = 0;
	i = 0;
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	while (str[i])
	{
		if (str[i] == ' ')
			space++;
		i++;
	}
	if (i != 31 || space != 15)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_check_error(char *str, int argc)
{
	int	j;

	j = 0;
	if (!(ft_check_space_len(str, argc)))
		return (0);
	while (str[j])
	{
		if (str[j] >= '0' && str[j] <= '4')
		{
			if (str[j + 1] >= '0' && str[j + 1] <= '4')
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		if (!(str[j] >= '0' && str[j] <= '4') && str[j] != 32)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		j++;
	}
	return (1);
}
