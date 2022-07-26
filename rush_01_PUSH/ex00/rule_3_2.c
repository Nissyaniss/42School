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
	int	lig;

	lig = 0;
	col = 0;
	while (col < 4)
	{
		if (arg[col] == 3 && arg2[col] == 2)
		{
				tab[col + 2][lig] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	col_down_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lig;

	lig = 0;
	col = 0;
	while (col < 4)
	{
		if (arg2[col] == 3 && arg[col] == 2)
		{
				tab[lig + 1][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	row_left_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lig;

	lig = 0;
	col = 0;
	while (lig < 4)
	{
		if (arg[lig] == 3 && arg2[lig] == 2)
		{
				tab[lig][col + 2] = 4;
		}
		lig++;
	}
	return (tab[4][4]);
}

int	row_right_3_2(int arg[4], int arg2[4], int tab[4][4])
{
	int	col;
	int	lig;

	lig = 0;
	col = 0;
	while (lig < 4)
	{
		if (arg2[lig] == 3 && arg[lig] == 2)
		{
				tab[lig][col + 1] = 4;
		}
		lig++;
	}
	return (tab[4][4]);
}
