/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:20:53 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/28 19:30:34 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
