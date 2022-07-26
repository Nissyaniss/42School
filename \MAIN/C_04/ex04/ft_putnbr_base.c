/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:46:02 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/20 17:46:05 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

void	ft_putnbr_base(int nb, char *base)
{
	if (nb <= 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nb, base);
	}
	else
	{
		if (nb > ft_strlen(base) - 1)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int main()
{
	int	nbr;
	char	base[] = "ponahv tiu";

	nbr = 146097382;

	ft_putnbr_base(nbr, base);
}
