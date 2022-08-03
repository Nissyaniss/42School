/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvalue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:38:38 by nloisy            #+#    #+#             */
/*   Updated: 2022/07/31 22:59:44 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
#include <unistd.h>

void	ft_putword(char *word)
{
	int	i;

	i = 0;
	while (word[i] != '\0')
	{
		write(1, &word[i], 1);
		i++;
	}
	write(1, " ", 1);
}

void	ft_printvalue(char ****numbers, char	*nb)
{
	int	nbtr;

	nbtr = ft_atoi2(nb);
	ft_decomp(nbtr, &numbers);
}
