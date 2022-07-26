/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:08:38 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/21 18:38:35 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
			return (0);
	while (i <= 9)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	nb--;
	while (!ft_is_prime(++nb))
		;
	return (nb);
}

int	main(void)
{
	printf("test = %d\n", ft_find_next_prime(11));
}
