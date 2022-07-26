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

#include <unistd.h>
#include <stdio.h>

int	col_up_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lig;
	int	i;

	lig = 0;
	col = 0;
	i = 0;
	while (col < 4)
	{
		if (arg[col] == 1)
		{
			tab[lig][i] = 4;
		}
		i++;
		col++;
	}
	return (tab[4][4]);
}

int	col_down_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lig;
	int	i;

	col = 0;
	lig = 3;
	i = 0;
	while (col < 4)
	{
		if (arg[col] == 1)
		{
			tab[lig][i] = 4;
		}
		i++;
		col++;
	}
	return (tab[4][4]);
}

int	row_left_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lig;
	int	i;

	i = 0;
	col = 0;
	lig = 0;
	while (lig < 4)
	{
		if (arg[lig] == 1)
		{
			tab[i][col] = 4;
		}
		i++;
		lig++;
	}
	return (tab[4][4]);
}

int	row_right_1(int arg[4], int tab[4][4])
{
	int	col;
	int	lig;
	int	i;

	i = 0;
	col = 3;
	lig = 0;
	while (lig < 4)
	{
		if (arg[lig] == 1)
		{
			tab[i][col] = 4;
		}
		i++;
		lig++;
	}
	return (tab[4][4]);
}
