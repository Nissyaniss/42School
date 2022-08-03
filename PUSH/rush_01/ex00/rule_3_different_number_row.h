/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_3_different_number_row.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarina <lfarina@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:04:42 by lfarina           #+#    #+#             */
/*   Updated: 2022/07/24 18:08:41 by lfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef RULE_3_DIFFERENT_NUMBER_ROW_H
# define RULE_3_DIFFERENT_NUMBER_ROW_H

int	ft_check_0(int col, int row, int count_no_0, int tab[4][4]);
int	ft_loca_col(int loca_col, int col, int row, int tab[4][4]);
int	ft_loca_row(int loca_row, int col, int row, int tab[4][4]);
int	ft_replace(int col, int loca_col, int loca_row, int tab[4][4]);
int	ft_replace_row3(int tab[4][4]);

#	endif
