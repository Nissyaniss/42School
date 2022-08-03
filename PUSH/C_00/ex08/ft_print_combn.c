/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:49:14 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/16 13:49:20 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char a)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
}

void ft_print_combn(int n)
{
	char a;
	char b;
	char c;
	char count;

	if (n > 0 && n < 10)
	{
		a = 1;
		b = 0;
		c = 0;
		count = 1;
		
		while (n == 1)
		{
			ft_putchar(a + 48);
			a++;
			if (a == 10)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		
		while (n == 2)
		{
			print(a);
			a++;
			
			if (a == b + 10)
			{
				printf(" b = %d", b);
				count++;
				b = a;
				a = a + count;
			}
			if (a == 100)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		while (n == 3)
		{
			print(c);
			print(a);
			a++;
			
			if (a == b + 10)
			{
				count++;
				b = a;
				a = a + count;
			}
			if (a == 100)
			{
				c++;
				count++;
				a = 1 + count;
			}
				if (a == 10)
					return ;
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	else
		return ;
}

int main()
{
	ft_print_combn(2);
	return 0;
}

