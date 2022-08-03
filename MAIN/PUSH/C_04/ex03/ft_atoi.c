/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:17:17 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/01 17:51:46 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_isspace_check(char *str)
{
	int	compteur;
	int i;

	compteur = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
		compteur++;
	}
	return (compteur);
}

int ft_neg_check(char *str)
{
	int minus_count;
	int i;

	minus_count = 0;
	i = ft_isspace_check(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	return (minus_count);
}

int ft_atoi(char *str)
{
	int i;
	int result;
	int current;

	i = ft_isspace_check(str);
	result = 0;
	current = 0;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		current = str[i] - 48;
		result = result * 10 + current;
		i++;
	}
	if ((ft_neg_check(str) % 2) == 1)
		return (-result);
	return (result);
}

int main()
{
	char	str[] = "     ---+--+1234ab567";
	const char	str0[] = "-1234ab567";

	printf("Moi = %d\n" ,ft_atoi(str));
	printf("Machine = %d\n" , atoi(str0));
}
