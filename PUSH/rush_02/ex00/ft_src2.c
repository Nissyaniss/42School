/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_src2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:19:40 by cglandus          #+#    #+#             */
/*   Updated: 2022/07/31 20:19:40 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

int	ft_tablen(int *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_pow(unsigned int nb, unsigned int power)
{
	unsigned int	save;

	save = nb;
	if (power == 0)
		return (1);
	if (power == 1)
		return (10);
	while (power > 1)
	{
		nb *= save;
		power--;
	}
	return (nb);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	nb;

	i = 0;
	nb = 0;
	if (!str)
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb);
}
