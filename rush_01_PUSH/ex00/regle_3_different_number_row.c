/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onrefaittout.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarina <lfarina@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:33:58 by lfarina           #+#    #+#             */
/*   Updated: 2022/07/24 18:08:17 by lfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_z(int col, int row, int count_no_0, int tab[4][4])
{
	while (row < 4)
	{
		if (tab[row][col] != 0)
			count_no_0++;
		row++;
	}
	return (count_no_0);
}

int	ft_loca_col(int loca_col, int col, int row, int tab[4][4])
{
	while (row < 4)
	{
		if (tab[row][col] == 0)
			loca_col = col;
		row++;
	}
	return (loca_col);
}

int	ft_loca_row(int loca_row, int col, int row, int tab[4][4])
{
	while (row < 4)
	{
		if (tab[row][col] == 0)
			loca_row = row;
		row++;
	}
	return (loca_row);
}

int	ft_replace(int col, int loca_col, int loca_row, int tab[4][4])
{
	int	add;

	add = tab[0][col] + tab[1][col];
	add = add + tab[2][col] + tab[3][col];
	tab[loca_row][loca_col] = 10 - add;
	return (tab[4][4]);
}

int	ft_replace_row3(int tab[4][4])
{
	int	count_no_z;
	int	col;
	int	row;
	int	loca_col;
	int	loca_row;

	col = 0;
	row = 0;
	count_no_z = 0;
	loca_col = 0;
	loca_row = 0;
	while (col < 4)
	{
		count_no_z = ft_check_z(col, row, count_no_z, tab);
		loca_col = ft_loca_col(loca_col, col, row, tab);
		loca_row = ft_loca_row(loca_row, col, row, tab);
		if (count_no_z == 3)
			tab[4][4] = ft_replace(col, loca_col, loca_row, tab);
		col++;
		count_no_z = 0;
	}
	return (tab[4][4]);
}
