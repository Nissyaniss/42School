/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:31:08 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/24 16:19:00 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (y < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] < tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i + 1], &tab[i]);
			i++;
		}
		i = 0;
		y++;
	}
}

int	main()
{
	int tab[] = {2147483647, 54, 9896, 545};
	int i;

	i = -1;
	ft_sort_int_tab(tab, 4);
	while (i++ < 3)
		printf("%d\n", tab[i]);
	return (0);
}
