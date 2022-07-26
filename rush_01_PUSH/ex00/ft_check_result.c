/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:15:12 by nmorandi          #+#    #+#             */
/*   Updated: 2022/07/24 11:15:13 by nmorandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_result_col(int tab[4][4])
{
	int	x;
	int	y;
	int	total;

	x = -1;
	y = -1;
	total = 0;
	while (++y < 4)
	{
		while (++x < 4)
		{
			total += tab[x][y];
		}
		if (total != 10)
			return (0);
		total = 0;
		x = -1;
	}
	return (1);
}

int	ft_check_result_lig(int tab[4][4])
{
	int	x;
	int	y;
	int	total;

	x = -1;
	y = -1;
	total = 0;
	while (++y < 4)
	{
		while (++x < 4)
			total += tab[y][x];
		if (total != 10)
			return (0);
		total = 0;
		x = -1;
	}
	if (ft_check_result_col(tab))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	tab[4][4] = {
	{1, 2, 4, 3},
	{3, 4, 1, 3},
	{2, 1, 3, 3},
	{4, 3, 2, 1}
	};
	if(!(ft_check_grid_result_lig(tab)))
		write(1,"Y",1);
}*/
