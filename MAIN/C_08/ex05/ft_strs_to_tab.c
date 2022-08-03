/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:00:07 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/03 15:03:08 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] && ++a)
		;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = -1;
	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[++i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *t_stock;

	t_stock = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (t_stock == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		t_stock[i].size = ft_strlen(av[i]);
		t_stock[i].str = av[i];
		t_stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	t_stock[i].str = 0;
	return (t_stock);
}
