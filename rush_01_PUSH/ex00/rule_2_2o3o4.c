/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_2-2~3~4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauffray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:35:16 by mauffray          #+#    #+#             */
/*   Updated: 2022/07/23 19:39:08 by mauffray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	col_up_2_2o3o4(int arg[4], int tab[4][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (arg[col] == 2)
		{
			if (tab[1][col] == 0 && (tab[2][col] != 4 && tab[2][col] != 0)
					&& (tab[3][col] != 4 && tab[3][col] != 0))
				tab[1][col] = 4;
			if (tab[2][col] == 0 && (tab[1][col] != 4 && tab[1][col] != 0)
					&& (tab[3][col] != 4 && tab[3][col] != 0))
				tab[2][col] = 4;
			if (tab[3][col] == 0 && (tab[1][col] != 4 && tab[1][col] != 0)
					&& (tab[2][col] != 4 && tab[2][col] != 0))
				tab[3][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	col_down_2_2o3o4(int arg[4], int tab[4][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (arg[col] == 2)
		{
			if (tab[0][col] == 0 && (tab[1][col] != 4 && tab[1][col] != 0)
					&& (tab[2][col] != 4 && tab[2][col] != 0))
				tab[0][col] = 4;
			if (tab[1][col] == 0 && (tab[0][col] != 4 && tab[0][col] != 0)
					&& (tab[2][col] != 4 && tab[2][col] != 0))
				tab[1][col] = 4;
			if (tab[2][col] == 0 && (tab[0][col] != 4 && tab[0][col] != 0)
					&& (tab[1][col] != 4 && tab[1][col] != 0))
				tab[2][col] = 4;
		}
		col++;
	}
	return (tab[4][4]);
}

int	row_left_2_2o3o4(int arg[4], int tab[4][4])
{
	int	lig;

	lig = 0;
	while (lig < 4)
	{
		if (arg[lig] == 2)
		{
			if (tab[lig][1] == 0 && (tab[lig][2] != 4 && tab[lig][2] != 0)
					&& (tab[lig][3] != 4 && tab[lig][3] != 0))
				tab[lig][1] = 4;
			if (tab[lig][2] == 0 && (tab[lig][1] != 4 && tab[lig][1] != 0)
					&& (tab[lig][3] != 4 && tab[lig][3] != 0))
				tab[lig][2] = 4;
			if (tab[lig][3] == 0 && (tab[lig][1] != 4 && tab[lig][1] != 0)
					&& (tab[lig][2] != 4 && tab[lig][2] != 0))
				tab[lig][3] = 4;
		}
		lig++;
	}
	return (tab[4][4]);
}

int	row_right_2_2o3o4(int arg[4], int tab[4][4])
{
	int	lig;

	lig = 0;
	while (lig < 4)
	{
		if (arg[lig] == 2)
		{
			if (tab[lig][0] == 0 && (tab[lig][1] != 4 && tab[lig][1] != 0)
					&& (tab[lig][2] != 4 && tab[lig][2] != 0))
				tab[lig][0] = 4;
			if (tab[lig][1] == 0 && (tab[lig][0] != 4 && tab[lig][0] != 0)
					&& (tab[lig][2] != 4 && tab[lig][2] != 0))
				tab[lig][1] = 4;
			if (tab[lig][2] == 0 && (tab[lig][0] != 4 && tab[lig][0] != 0)
					&& (tab[lig][1] != 4 && tab[lig][1] != 0))
				tab[lig][2] = 4;
		}
		lig++;
	}
	return (tab[4][4]);
}
