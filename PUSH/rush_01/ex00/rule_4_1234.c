/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_4_1234.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:25:18 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/23 19:52:05 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	lin0_4(int lin0[4], int arg[4][4])
{
	int	col;
	int	row;
	int	i;

	col = 0;
	row = 0;
	i = 1;
	while (row != 4)
	{
		if (lin0[row] == 4)
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

int	lin1_4(int lin0[4], int arg[4][4])
{
	int	col;
	int	row;
	int	i;

	col = 3;
	row = 0;
	i = 1;
	while (row != 4)
	{
		if (lin0[row] == 4)
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
