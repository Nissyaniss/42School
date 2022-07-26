/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regle_3_different_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:44:12 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/23 19:34:00 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cal_check(int col, int col_sauv, int row_sauv, int arg[4][4])
{
	int	cal;

	cal = 0;
	cal = arg[col][0] + arg[col][1];
	cal = cal + arg[col][2] + arg[col][3];
	if (cal == 9)
		arg[col_sauv][row_sauv] = 1;
	if (cal == 8)
		arg[col_sauv][row_sauv] = 2;
	if (cal == 7)
		arg[col_sauv][row_sauv] = 3;
	if (cal == 6)
		arg[col_sauv][row_sauv] = 0;
	return (arg[4][4]);
}

int	ft_row_sauv(int row_sauv, int row, int col, int arg[4][4])
{
	while (row != 4)
	{
		if (arg[col][row] == 0)
			row_sauv = row;
		row++;
	}
	return (row_sauv);
}

int	ft_col_sauv(int col_sauv, int row, int col, int arg[4][4])
{
	while (row != 4)
	{
		if (arg[col][row] == 0)
			col_sauv = col;
		row++;
	}
	return (col_sauv);
}

int	ft_0_check(int col, int row, int count_non_0, int arg[4][4])
{
	while (row != 4)
	{
		if (arg[col][row] != 0)
			count_non_0++;
		row++;
	}
	return (count_non_0);
}

int	col_3(int arg[4][4])
{
	int	col;
	int	row;
	int	count_non_0;
	int	col_sauv;
	int	row_sauv;

	col = 0;
	row = 0;
	count_non_0 = 0;
	col_sauv = 0;
	row_sauv = 0;
	while (col != 4)
	{
		count_non_0 = ft_0_check(col, row, count_non_0, arg);
		col_sauv = ft_col_sauv(col_sauv, row, col, arg);
		row_sauv = ft_row_sauv(row_sauv, row, col, arg);
		if (count_non_0 == 3)
			arg[4][4] = ft_cal_check(col, col_sauv, row_sauv, arg);
		row = 0;
		count_non_0 = 0;
		row = 0;
		col++;
	}
	return (arg[4][4]);
}
/*
void	affichage(int tab[4][4])
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (n < 4)
	{
		while (i < 4)
		{
			tab[n][i] += '0';
			write(1, &tab[n][i], 1);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	tab[4][4] = {
	{0, 2, 3, 4},
	{2, 1, 4, 0},
	{4, 0, 2, 1},
	{3, 4, 0, 2}
	};

	(void) argc;
	(void) argv;
	col(tab);
	affichage(tab);
	return (0);
}
*/