/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:54:35 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/24 11:50:17 by lfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rule_4_1234.h"
#include "rule_3_different_number.h"
#include "rule1_2.h"
#include "print.h"
#include "rule_1.h"
#include "rule_2_2_2o3.h"
#include "rule_2_2o3o4.h"
#include "rule_3_1.h"
#include "rule_3_3o4.h"
#include "ft_check_input.h"
#include "ft_parsing.h"
#include "ft_check_result.h"
#include "rule_3_different_number_row.h"
#include "rule_3_2.h"

void	resolve_tab_f(int tab[4][4], int tab_up_down[8], int tab_left_right[8])
{
	int	tab_down[4];
	int	tab_right[4];

	ft_split(tab_up_down, tab_down, tab_left_right, tab_right);
	tab[4][4] = col_up_2_2o3o4(tab_up_down, tab);
	tab[4][4] = col_down_2_2o3o4(tab_down, tab);
	tab[4][4] = row_left_2_2o3o4(tab_left_right, tab);
	tab[4][4] = row_right_2_2o3o4(tab_right, tab);
	tab[4][4] = col_up_3_3o4(tab_up_down, tab);
	tab[4][4] = col_down_3_3o4(tab_down, tab);
	tab[4][4] = row_right_3_3o4(tab_right, tab);
	tab[4][4] = row_left_3_3o4(tab_left_right, tab);
	tab[4][4] = col_3(tab);
	tab[4][4] = ft_replace_row3(tab);
	tab[4][4] = col_3(tab);
	tab[4][4] = ft_replace_row3(tab);
}

void	resolve_tab(int tab[4][4], int tab_up_down[8], int tab_left_right[8])
{
	int	tab_down[4];
	int	tab_right[4];

	ft_split(tab_up_down, tab_down, tab_left_right, tab_right);
	tab[4][4] = col_up_1(tab_up_down, tab);
	tab[4][4] = col_down_1(tab_down, tab);
	tab[4][4] = row_left_1(tab_left_right, tab);
	tab[4][4] = row_right_1(tab_right, tab);
	tab[4][4] = col_up_3_2(tab_up_down, tab_down, tab);
	tab[4][4] = col_down_3_2(tab_up_down, tab_down, tab);
	tab[4][4] = row_left_3_2(tab_left_right, tab_right, tab);
	tab[4][4] = row_right_3_2(tab_left_right, tab_right, tab);
	tab[4][4] = col0_4(tab_left_right, tab);
	tab[4][4] = col1_4(tab_right, tab);
	tab[4][4] = lin0_4(tab_up_down, tab);
	tab[4][4] = lin1_4(tab_down, tab);
	tab[4][4] = col_1_2(tab_up_down, tab_down, tab);
	tab[4][4] = lin_1_2(tab_left_right, tab_right, tab);
	tab[4][4] = col_2_2_2o3(tab_up_down, tab_down, tab);
	tab[4][4] = row_2_2_2o3(tab_left_right, tab_right, tab);
	resolve_tab_f(tab, tab_up_down, tab_left_right);
}

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	tab_up_down[8];
	int	tab_left_right[8];
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 4)
	{
		while (++j < 4)
			tab[i][j] = 0;
		j = -1;
	}
	if (!(ft_check_error(argv[1], argc)))
		return (0);
	ft_input(argv[1], tab_up_down, tab_left_right);
	resolve_tab(tab, tab_up_down, tab_left_right);
	print(tab);
	if (!(ft_check_result_lin(tab)))
		write (1, "No Solution found\n", 18);
	return (0);
}
