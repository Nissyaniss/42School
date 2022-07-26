/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regle_4_1234.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:25:18 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/23 19:52:05 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//exemple de tableau a 2 dimensions :
//int tab[4][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};

int	col0_4(int col0[4], int arg[4][4])
{
	int	col;
	int	row;
	int	i;

	col = 0;
	row = 0;
	i = 1;
	while (col != 4)
	{
		if (col0[col] == 4)
		{
			while (i != 5)
			{
				arg[col][row] = i;
				i++;
				row++;
			}
			i = 1;
			row = 0;
		}
		col++;
	}
	return (arg[4][4]);
}

int	col1_4(int col1[4], int arg[4][4])
{
	int	col;
	int	row;
	int	i;

	col = 0;
	row = 3;
	i = 1;
	while (col != 4)
	{
		if (col1[col] == 4)
		{
			while (i != 5)
			{
				arg[col][row] = i;
				i++;
				row--;
			}
			i = 1;
			row = 0;
		}
		col++;
	}
	return (arg[4][4]);
}

int	lig0_4(int lig0[4], int arg[4][4])
{
	int	col;
	int	row;
	int	i;

	col = 0;
	row = 0;
	i = 1;
	while (row != 4)
	{
		if (lig0[row] == 4)
		{
			while (i != 5)
			{
				arg[col][row] = i;
				i++;
				col++;
			}
			i = 1;
			col = 0;
		}
		row++;
	}
	return (arg[4][4]);
}

int	lig1_4(int lig0[4], int arg[4][4])
{
	int	col;
	int	row;
	int	i;

	col = 3;
	row = 0;
	i = 1;
	while (row != 4)
	{
		if (lig0[row] == 4)
		{
			while (i != 5)
			{
				arg[col][row] = i;
				i++;
				col--;
			}
			i = 1;
			col = 0;
		}
		row++;
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
	int	str_col0[4] = {4, 0, 0, 0};
	int	str_lig0[4] = {4, 0, 0, 0};
	int	str_col1[4] = {0, 0, 0, 4};
	int	str_lig1[4] = {0, 0, 0, 4};
	int	tab[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	tab[4][4] = col0(str_col0, tab);
	tab[4][4] = lig0(str_lig0, tab);
	tab[4][4] = col1(str_col1, tab);
	tab[4][4] = lig1(str_lig1, tab);
	affichage(tab);
	return (0);
}
*/
