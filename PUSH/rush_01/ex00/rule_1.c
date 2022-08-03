/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauffray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:46:32 by mauffray          #+#    #+#             */
/*   Updated: 2022/07/23 16:54:28 by mauffray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lin;
	int	i;

	lin = 0;
	col = 0;
	i = 0;
	while (col < 4)
	{
		if (arg[col] == 1)
		{
			tab[lin][i] = 4;
		}
		i++;
		col++;
	}
	return (tab[4][4]);
}

int	col_down_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lin;
	int	i;

	col = 0;
	lin = 3;
	i = 0;
	while (col < 4)
	{
		if (arg[col] == 1)
		{
			tab[lin][i] = 4;
		}
		i++;
		col++;
	}
	return (tab[4][4]);
}

int	row_left_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lin;
	int	i;

	i = 0;
	col = 0;
	lin = 0;
	while (lin < 4)
	{
		if (arg[lin] == 1)
		{
			tab[i][col] = 4;
		}
		i++;
		lin++;
	}
	return (tab[4][4]);
}

int	row_right_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lin;
	int	i;

	i = 0;
	col = 3;
	lin = 0;
	while (lin < 4)
	{
		if (arg[lin] == 1)
		{
			tab[i][col] = 4;
		}
		i++;
		lin++;
	}
	return (tab[4][4]);
}
