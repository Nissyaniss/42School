/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:24:17 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/25 13:45:46 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		i0;
	char	*test;

	i = 0;
	i0 = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[i0])
		{
			if (i0 == 0)
				test = &str[i];
			i++;
			i0++;
			if (i0 == ft_strlen(to_find))
				return (test);
		}
		i0 = 0;
		i++;
	}
	test = (0);
	return (test);
}


int	main(void)
{
	char		str[255] = "test";
	char		str0[255] = "rgargarwgsec5retargareg";
	const char	str1[255] = "test";
	const char	str2[255] = "rgargarwgsec5retargareg";
	char		to_find[255] = "";
	const char	to_find0[255] = "";
	char		*good = ft_strstr(str, to_find);
	char		*not_good = ft_strstr(str0, to_find);

	printf("Moi : \n");
	printf("Juste = %s\n", good);
	printf("Pas juste = %s\n", not_good);
	printf("\nMachine : \n");
	printf("Juste = %s\n", strstr(str1, to_find0));
	printf("Pas juste = %s\n", strstr(str2, to_find0));
}
