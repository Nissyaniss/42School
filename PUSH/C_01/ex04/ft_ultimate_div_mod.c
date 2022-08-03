/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:56:52 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/15 09:56:53 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	sauva;
	int	sauvb;

	sauva = *a;
	sauvb = *b;
	*a = sauva / sauvb;
	*b = sauva % sauvb;
}
