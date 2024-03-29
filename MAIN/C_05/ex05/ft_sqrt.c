/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:59:43 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/01 13:33:15 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%d\n", ft_sqrt(2147395600));
}
