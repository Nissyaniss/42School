/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:10:17 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/17 15:10:19 by ylasbord         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i <= size - 1 )
	{
		if (str[i] >= '1' && str[i] <= '9')
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
	char no[255] = "865sTr453";
	char yes[255] = "1154";
	char empty[255] = "";

	char no_test = ft_str_is_numeric(no);
	char yes_test = ft_str_is_numeric(yes);
	char empty_test = ft_str_is_numeric(empty);

	printf("no = %d\n", no_test);
	printf("yes = %d\n", yes_test);
	printf("empty = %d\n", empty_test);
}