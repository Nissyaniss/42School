/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:58:41 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/17 15:58:43 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strupcase(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i <= size - 1 )
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int main()
{
	char test[255] = "BoNjOuR";

	printf("begin = %s\n", test);
	printf("result = %s", ft_strupcase(test));
}
