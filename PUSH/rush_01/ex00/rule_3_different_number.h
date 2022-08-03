/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_3_different_number.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:52:38 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/23 19:54:25 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef RULE_3_DIFFERENT_NUMBER_H
# define RULE_3_DIFFERENT_NUMBER_H

int	col_3(int arg[4][4]);
int	ft_0_check(int col, int row, int count_non_0, int arg[4][4]);
int	ft_col_sauv(int col_sauv, int row, int col, int arg[4][4]);
int	ft_row_sauv(int row_sauv, int row, int col, int arg[4][4]);
int	ft_cal_check(int col, int col_sauv, int row_sauv, int arg[4][4]);

#	endif