/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regle1_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:00:13 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/23 20:00:48 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	col_1_2(int col0[4], int col1[4], int arg[4][4])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row != 4)
	{
		if (col0[row] == 1 && col1[row] == 2)
			arg[col + 3][row] = 3;
		if (col1[row] == 1 && col0[row] == 2)
			arg[col][row] = 3;
		row++;
	}
	return (arg[4][4]);
}

int	lig_1_2(int lig0[4], int lig1[4], int arg[4][4])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col != 4)
	{
		if (lig0[col] == 1 && lig1[col] == 2)
			arg[col][row + 3] = 3;
		if (lig1[col] == 1 && lig0[col] == 2)
			arg[col][row] = 3;
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
	(void) argc;
	(void) argv;
	int	str_col0[4] = {0, 1, 2, 0};
	int	str_col1[4] = {0, 2, 1, 0};
	int	str_lig0[4] = {0, 1, 2, 0};
	int	str_lig1[4] = {0, 2, 1, 0};
	int	tab[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	col(str_col0, str_col1, tab);
	lig(str_lig0, str_lig1, tab);
	affichage(tab);
	return (0);
}
*/
