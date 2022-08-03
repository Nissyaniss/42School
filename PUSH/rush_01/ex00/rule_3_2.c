/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_3_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:50:51 by mauffray          #+#    #+#             */
/*   Updated: 2022/07/24 15:39:49 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 0;
	while (col < 4)
	{
		if (arg[col] == 3 && arg2[col] == 2)
		{
				tab[col + 2][lin] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	col_down_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 0;
	while (col < 4)
	{
		if (arg2[col] == 3 && arg[col] == 2)
		{
				tab[lin + 1][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	row_left_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 0;
	while (lin < 4)
	{
		if (arg[lin] == 3 && arg2[lin] == 2)
		{
				tab[lin][col + 2] = 4;
		}
		lin++;
	}
	return (tab[4][4]);
}

int	row_right_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lin;

	lin = 0;
	col = 0;
	while (lin < 4)
	{
		if (arg2[lin] == 3 && arg[lin] == 2)
		{
				tab[lin][col + 1] = 4;
		}
		lin++;
	}
	return (tab[4][4]);
}
