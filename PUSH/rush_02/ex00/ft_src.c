/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_src.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:19:45 by cglandus          #+#    #+#             */
/*   Updated: 2022/07/31 20:19:49 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str [i] != '\0')
		i++;
	j = 0;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	if (j == i)
		return (1);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str [++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(unsigned int nb)
{
	if (nb > 4294967294)
	{
		write (1, "Error\n", 6);
		return ;
	}
	if (nb == 0 || (nb > 0 && nb < 10))
		ft_putchar ('0' + nb);
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

int	ft_atoi_dom(char *str)
{
	unsigned int	res;
	unsigned int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
