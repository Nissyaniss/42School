/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_2-2_2~3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauffray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:10:36 by mauffray          #+#    #+#             */
/*   Updated: 2022/07/23 19:10:39 by mauffray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_2_2_2o3(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (arg[col] == 2 && arg2[col] == 2)
		{
			if (tab[1][col] == 0 && (tab[2][col] != 4 && tab[2][col] != 0))
				tab[1][col] = 4;
			if (tab[2][col] == 0 && (tab[1][col] != 4 && tab[1][col] != 0))
				tab[2][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	row_2_2_2o3(int arg[4], int arg2[4], int tab[4][4])
{
	int	lin;

	lin = 0;
	while (lin < 4)
	{
		if (arg[lin] == 2 && arg2[lin] == 2)
		{
			if (tab[lin][1] == 0 && (tab[lin][2] != 4 && tab[lin][2] != 0))
				tab[lin][1] = 4;
			if (tab[lin][2] == 0 && (tab[lin][1] != 4 && tab[lin][1] != 0))
				tab[lin][2] = 4;
		}
		lin++;
	}
	return (tab[4][4]);
}
