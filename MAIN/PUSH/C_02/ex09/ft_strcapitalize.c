/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:13:20 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/17 16:13:21 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_alphanum(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (is_alphanum(str[i - 1]))
				str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(is_alphanum(str[i - 1])))
				str[i] -= 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}

int main()
{
	char str1[] = "Y(Si80#Qs  WOW  yes  ;P#%K95p:XA^$:Ka@G9dtl1%T";
	char str2[] = "Y(Si80#Qs  Wow  Yes  ;P#%K95p:Xa^$:Ka@G9dtl1%T";
	
	printf("result = %s\n", ft_strcapitalize(str1));
	printf("mustbe = %s", str2);
}