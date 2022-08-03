/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:46:17 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/01 13:09:46 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_check(char *base)
{
	int	len;
	int	j;
	int	i;

	i = 0;
	j = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	while (i <= len)
	{
		while (j++ <= len)
		{
			if (base[j] == base[i])
				return (0);
		}
		j = 0;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (!(ft_base_check(base)))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr_base(214748, base);
			ft_putnbr_base(3648, base);
		}
		else
		{
			ft_putnbr_base(-nb, base);
		}
	}
	else
	{
		if (nb > ft_strlen(base) - 1)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
