/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:11:48 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/24 17:06:56 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	i;
	int	y;
	char	*c;

	i = 0;
	y = 0;
	while (y < size - 1)
	{
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				c = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = c;
			}
			// if (ft_strcmp(&tab[i], &tab[i + 1]) < 0)
			// {
			// 	ft_swap(&tab[i + 1], &tab[i]);
			// }
			i++;
		}
		i = 0;
		y++;
	}
}

int	main(int argc, char **argv)
{
	int nb;

	nb = 1;
	ft_sort_int_tab(argv, argc);
	while (nb <= argc)
	{
		ft_putstr(argv[nb]);
		ft_putstr("\n");
		nb++;
	}
	return (0);
}
