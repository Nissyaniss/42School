/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:07:16 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/21 18:41:31 by ylasbord         ###   ########.fr       */
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

int	main(void)
{
	printf("%d\n", ft_is_prime(12));
}
