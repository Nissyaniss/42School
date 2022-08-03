/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:39:59 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/15 10:40:03 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;

	if (size < 2)
		return ;
	c = tab[0];
	tab[0] = tab[size];
	tab[size] = c;
	ft_rev_int_tab(tab + 1, size - 2);
}
