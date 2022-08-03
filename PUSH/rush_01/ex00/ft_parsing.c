/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:14:48 by nmorandi          #+#    #+#             */
/*   Updated: 2022/07/24 11:14:50 by nmorandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_input(char *str, int *tab1, int *tab2)
{
	int	tab[16];
	int	count;
	int	x;
	int	order;

	order = -1;
	x = -1;
	count = -1;
	while (str[++x])
		if (str[x] >= '0' && str[x] <= '4')
			tab[++order] = str[x] - '0';
	order = -1;
	while (++count < 8)
		tab1[++order] = tab[count];
	order = -1;
	count--;
	while (++count >= 8 && count < 16)
		tab2[++order] = tab[count];
}

void	ft_split(int *tab1, int *tab2, int *tab3, int *tab4)
{
	int	lentab;
	int	i;

	i = -1;
	lentab = 4;
	while (++i < lentab)
		tab2[i] = tab1[lentab + i];
	i = -1;
	while (++i < lentab)
		tab4[i] = tab3[lentab + i];
	i = -1;
	while (++i < lentab)
	{
		tab3[lentab + i] = 0;
		tab1[lentab + i] = 0;
	}
}
