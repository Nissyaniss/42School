/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:41:35 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/14 10:42:15 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	exit(int return_code);

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	check_end(char a, char b, char c)
{
	if (a == '7' && b == '8')
	{
		print(a, b, c);
		exit(0);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				check_end(a, b, c);
				print(a, b, c);
				write(1, ",", 1);
				write(1, " ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
