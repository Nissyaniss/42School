/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:20:49 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/21 14:03:44 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = nb;
	if (i > 1)
	{
		i--;
		result = ft_recursive_factorial(i) * result;
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb = result;
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
