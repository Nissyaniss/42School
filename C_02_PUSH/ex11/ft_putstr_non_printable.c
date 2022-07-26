/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:08:18 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/17 19:08:19 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define MIN_PRINTABLE 32
#define MAX_PRINTABLE 126
#define ASCII_NUMBER_OFFSET 48
#define ASCII_LETTER_OFFSET 97 

char	ft_to_hex(int value)
{
	char	table[16];
	int		i;

	i = -1;
	while (i++ < 9)
		table[i] = (char)(i + ASCII_NUMBER_OFFSET);
	while (i++ < 18)
		table[i - 1] = (char)(i - 11 + ASCII_LETTER_OFFSET);
	return (table[value % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	char	buffer;
	char	current;

	while (*str++)
	{
		current = *(str - 1);
		if (current >= MIN_PRINTABLE && current <= MAX_PRINTABLE)
			write(1, &current, 1);
		else
		{
			write(1, "\\", 1);
			buffer = ft_to_hex(((unsigned char) current) / 16);
			write(1, &buffer, 1);
			buffer = ft_to_hex(((unsigned char) current) % 16);
			write(1, &buffer, 1);
		}
	}
}
