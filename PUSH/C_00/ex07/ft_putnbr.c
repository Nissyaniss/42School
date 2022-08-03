/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:48:25 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/14 10:48:27 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	abs(int value)
{
	return (value * ((value > 0) - (value < 0)));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_big_number_ahahah(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

int	neg(int nb)
{
	nb = abs(nb);
	ft_putchar('-');
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_big_number_ahahah();
		return ;
	}
	if (nb <= 0)
		nb = neg(nb);
	if (nb >= 0 && nb <= 99)
	{
		if (nb > 9)
			ft_putchar(nb / 10 + 48);
		ft_putchar(nb % 10 + 48);
	}
	else if (nb >= 0 && nb > 99)
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

