/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:30:32 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/20 11:30:34 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		return ;
	}
	if (nb <= 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int	main(void)
{
	puts("neg = ");
	ft_putnbr(-5545);
	puts("\n\npos = ");
	ft_putnbr(5545);
	puts("\n\nint_min = ");
	ft_putnbr(-2147483648);
	puts("\n\nint_max = ");
	ft_putnbr(2147483647);
	return (0);
}
