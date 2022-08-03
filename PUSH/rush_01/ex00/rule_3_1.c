/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_3-1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauffray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:50:51 by mauffray          #+#    #+#             */
/*   Updated: 2022/07/23 16:54:07 by mauffray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up_3_1(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 0;
	while (col < 4)
	{
		if (arg[col] == 3 && arg2[col] == 1)
		{
				tab[lin][col] = 2;
		}
		col++;
	}
	return (tab[4][4]);
}

int	col_down_3_1(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 3;
	col = 0;
	while (col < 4)
	{
		if (arg2[col] == 3 && arg[col] == 1)
		{
				tab[lin][col] = 2;
		}
		col++;
	}
	return (tab[4][4]);
}

int	row_left_3_1(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 0;
	while (lin < 4)
	{
		if (arg[lin] == 3 && arg2[lin] == 1)
		{
				tab[lin][col] = 2;
		}
		lin++;
	}
	return (tab[4][4]);
}

int	row_right_3_1(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 3;
	while (lin < 4)
	{
		if (arg2[lin] == 3 && arg[lin] == 1)
		{
				tab[lin][col] = 2;
		}
		lin++;
	}
	return (tab[4][4]);
}
