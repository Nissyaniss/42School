/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:47:43 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/21 14:43:07 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_power;

	i = power;
	nb_power = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * nb_power;
		i--;
	}
	return (nb);
}
