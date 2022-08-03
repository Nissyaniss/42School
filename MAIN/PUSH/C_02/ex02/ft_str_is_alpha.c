/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:37:46 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/17 13:37:47 by ylasbord         ###   ########.fr       */
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

char	ft_str_is_alpha(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i <= size - 1 )
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
	char no[255] = "1sTr";
	char yes[255] = "sTr";
	char empty[255] = "";

	char no_test = ft_str_is_alpha(no);
	char yes_test = ft_str_is_alpha(yes);
	char empty_test = ft_str_is_alpha(empty);

	printf("no = %d\n", no_test);
	printf("yes = %d\n", yes_test);
	printf("empty = %d\n", empty_test);
}