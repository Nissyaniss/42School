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

int	lin_1_2(int lin0[4], int lin1[4], int arg[4][4])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col != 4)
	{
		if (lin0[col] == 1 && lin1[col] == 2)
			arg[col][row + 3] = 3;
		if (lin1[col] == 1 && lin0[col] == 2)
			arg[col][row] = 3;
		col++;
	}
	return (arg[4][4]);
}
