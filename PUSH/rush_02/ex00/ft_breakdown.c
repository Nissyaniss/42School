/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_breakdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:20:06 by nloisy            #+#    #+#             */
/*   Updated: 2022/07/31 22:42:23 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes.h"

int	ft_sizenb(int nb)
{
	int	i;
	int	result;
	int	counter;

	i = 1;
	counter = 0;
	result = 0;
	while (i == 1 || result > 0)
	{
		result = nb / i;
		i *= 10;
		counter ++;
	}
	return (counter - 1);
}

void	ft_break_down_number(unsigned int nb, int *tab)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	while (nb > 9)
	{
		if (nb == 10)
			tab[i] = 42;
		else if ((nb % 10) == 0)
			tab[i] = 42;
		else
			tab[i] = nb % 10;
		if (tab[i] != 42)
			tab[i] *= ft_pow(10, j);
		nb /= 10;
		i++;
		j++;
	}
	if (nb != 0 && nb < 11)
		tab[i] = nb * ft_pow(10, j);
	len = ft_tablen(tab);
	ft_rev_int_tab(tab, len);
}

char	*ft_searchnb(char *****numbers, int decompnb)
{
	int	j;

	j = 0;
	if (decompnb == ft_atoi2((**numbers)[j][0]))
		return ((char *)numbers[j][1]);
	while (decompnb != ft_atoi2((**numbers)[j][0])
		&& ft_atoi2((**numbers)[j][0]) != 1000000000)
		j++;
	if (decompnb == ft_atoi2((**numbers)[j][0]))
	{
		return ((char *)numbers[j][1]);
	}
	else
	{
		ft_searchnb(numbers, ft_atoi2((**numbers)[j][0])
			/ ft_pow(10, ft_sizenb(decompnb) - 1));
		ft_searchnb(numbers, ft_atoi2((**numbers)[j][0])
			/ (ft_atoi2((**numbers)[j][0])
				/ ft_pow(10, ft_sizenb(decompnb) - 1)));
	}
	return ((char *)numbers[j][1]);
}

void	ft_decomp(int nb, char *****numbers)
{
	int		i;
	int		*tab;
	char	*word;

	i = 0;
	word = malloc(4096 * sizeof(char *));
	tab = malloc(9 * sizeof(unsigned int));
	ft_break_down_number(nb, tab);
	while (i <= ft_sizenb(nb) - 1)
	{
		word = ft_searchnb(numbers, tab[i]);
		ft_putword(word);
		i++;
	}
	free(word);
}
