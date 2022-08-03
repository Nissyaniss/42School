/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:43:47 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/17 15:43:49 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i <= size - 1 )
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
	char no[255] = "\n";
	char yes[255] = "STR";
	char empty[255] = "";

	char no_test = ft_str_is_printable(no);
	char yes_test = ft_str_is_printable(yes);
	char empty_test = ft_str_is_printable(empty);

	printf("no = %d\n", no_test);
	printf("yes = %d\n", yes_test);
	printf("empty = %d\n", empty_test);
}
