/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stock_str.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:01:16 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/02 01:50:57 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STOCK_STR_H
# define T_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif