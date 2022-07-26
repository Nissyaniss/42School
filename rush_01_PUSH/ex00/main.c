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

#include <stdio.h>
#include "regle_4_1234.h"
#include "regle_3_different_number.h"
#include "regle1_2.h"
#include "print.h"
#include "rule_1.h"
#include "rule_2_2_2o3.h"
#include "rule_2_2o3o4.h"
#include "rule_3_1.h"
#include "rule_3_3o4.h"
#include "ft_check_input.h"
#include "ft_parsing.h"
#include "ft_check_result.h"
#include "print_tab.h"
#include "regle_3_different_number_row.h"
#include "rule_3_2.h"

void	resolve_tab(int	tab[4][4], int tab_UP_DOWN[8], int tab_LEFT_RIGHT[8])
{
	int	tab_DOWN[4];
	int	tab_RIGHT[4];

	ft_split(tab_UP_DOWN, tab_DOWN, tab_LEFT_RIGHT, tab_RIGHT);
	tab[4][4] = col_up_1(tab_UP_DOWN, tab); // 1==4
	tab[4][4] = col_down_1(tab_DOWN, tab); 
	tab[4][4] = row_left_1(tab_LEFT_RIGHT, tab);
	tab[4][4] = row_right_1(tab_RIGHT, tab);
	tab[4][4] = col_up_3_2(tab_UP_DOWN, tab_DOWN, tab); // les 4 de partout
	tab[4][4] = col_down_3_2(tab_UP_DOWN, tab_DOWN, tab);
	tab[4][4] = row_left_3_2(tab_LEFT_RIGHT, tab_RIGHT, tab);
	tab[4][4] = row_right_3_2(tab_LEFT_RIGHT, tab_RIGHT, tab);
	tab[4][4] = col0_4(tab_LEFT_RIGHT, tab);// 1234 --
	tab[4][4] = col1_4(tab_RIGHT, tab); // 1234 --
	tab[4][4] = lig0_4(tab_UP_DOWN, tab); // 1234 --
	tab[4][4] = lig1_4(tab_DOWN, tab); // 1234 --
	tab[4][4] = col_1_2(tab_UP_DOWN, tab_DOWN, tab); // 1 en face de 2 
	tab[4][4] = lig_1_2(tab_LEFT_RIGHT, tab_RIGHT, tab);
	tab[4][4] = col_2_2_2o3(tab_UP_DOWN, tab_DOWN, tab); // 2 en face de 2
	tab[4][4] = row_2_2_2o3(tab_LEFT_RIGHT, tab_RIGHT, tab);
	tab[4][4] = col_up_2_2o3o4(tab_UP_DOWN, tab); // 2 position du 4
	tab[4][4] = col_down_2_2o3o4(tab_DOWN, tab);
	tab[4][4] = row_left_2_2o3o4(tab_LEFT_RIGHT, tab);
	tab[4][4] = row_right_2_2o3o4(tab_RIGHT, tab);
	tab[4][4] = col_up_3_3o4(tab_UP_DOWN, tab);
	tab[4][4] = col_down_3_3o4(tab_DOWN, tab);
	tab[4][4] = row_right_3_3o4(tab_RIGHT, tab);
	tab[4][4] = row_left_3_3o4(tab_LEFT_RIGHT, tab);
	tab[4][4] = col_3(tab); // control des add a la fin
	tab[4][4] = ft_replace_row3(tab);
	tab[4][4] = col_3(tab); // control des add a la fin
	tab[4][4] = ft_replace_row3(tab);


	}	
/*
int	control_output(int tab[4][4])
{

}
*/

int	main(int argc, char **argv)
{
	(void) argc;
	int	tab[4][4] = {0};
	int	tab_UP_DOWN[8];
	int	tab_LEFT_RIGHT[8];

	if (!(ft_check_error(argv[1])))
		return (0);
	ft_input(argv[1], tab_UP_DOWN, tab_LEFT_RIGHT);
	resolve_tab( tab, tab_UP_DOWN, tab_LEFT_RIGHT);
	print(tab);

	//print(tab);
	return (0);
}
