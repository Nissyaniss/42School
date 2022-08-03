/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:48:07 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/14 10:48:09 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char a, char b)
{
	ft_putchar(' ');
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
	ft_putchar(' ');
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	int		count;

	a = 1;
	b = 0;
	count = 0;
	while (a != 100)
	{
		print(a, b);
		if (a == 99 && b == 98)
		{
			return ;
		}
		ft_putchar(',');
		a++;
		while (b != 98 && a == 100)
		{
			b++;
			count++;
			a = 1 + count;
		}
	}
}
