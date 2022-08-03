/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_3-3~4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauffray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:28:43 by mauffray          #+#    #+#             */
/*   Updated: 2022/07/23 18:29:19 by mauffray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up_3_3o4(int arg[4], int tab[4][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (arg[col] == 3)
		{
			if (tab[2][col] == 0 && (tab[3][col] != 4 && tab[3][col] != 0))
				tab[2][col] = 4;
			if (tab[3][col] == 0 && (tab[2][col] != 4 && tab[2][col] != 0))
				tab[3][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	col_down_3_3o4(int arg[4], int tab[4][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (arg[col] == 3)
		{
			if (tab[1][col] == 0 && (tab[0][col] != 4 && tab[0][col] != 0))
				tab[1][col] = 4;
			if (tab[0][col] == 0 && (tab[1][col] != 4 && tab[1][col] != 0))
				tab[0][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	row_left_3_3o4(int arg[4], int tab[4][4])
{
	int	lin;

	lin = 0;
	while (lin < 4)
	{
		if (arg[lin] == 3)
		{
			if (tab[lin][2] == 0 && (tab[lin][3] != 4 && tab[lin][3] != 0))
				tab[lin][2] = 4;
			if (tab[lin][3] == 0 && (tab[lin][2] != 4 && tab[lin][2] != 0))
				tab[lin][3] = 4;
		}
		lin++;
	}
	return (tab[4][4]);
}

int	row_right_3_3o4(int arg[4], int tab[4][4])
{
	int	lin;

	lin = 0;
	while (lin < 4)
	{
		if (arg[lin] == 3)
		{
			if (tab[lin][1] == 0 && (tab[lin][0] != 4 && tab[lin][0] != 0))
				tab[lin][1] = 4;
			if (tab[lin][0] == 0 && (tab[lin][1] != 4 && tab[lin][1] != 0))
				tab[lin][0] = 4;
		}
		lin++;
	}
	return (tab[4][4]);
}
