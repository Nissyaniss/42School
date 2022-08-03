/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:37:29 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/03 13:28:08 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	str_charset_check(char *str, char *to_find, int count)
{
	int		i;
	int		i0;
	char	*str_result;

	i = 0;
	i0 = 0;
	if (ft_strlen(to_find) == 0)
		return (count);
	while (str[i] != '\0')
	{
		while (str[i + i0] == to_find[i0])
		{
			while (str[i + i0 + 1] == to_find[i0])
				i++;
			if (str[i + i0 + 1] == '\0')
				break ;
			if (i0 == 0)
				str_result = &str[i + 1];
			if (++i0 == ft_strlen(to_find))
				str_charset_check(str_result, to_find, count++);
		}
		i0 = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		count;
	int		i;
	int		i0;

	result = malloc(2000);
	i = 0;
	i0 = 0;
	count = 1;
	count = str_charset_check(str, charset, count);
	while (count != 0)
	{
		while (str[++i] == charset[++i0])
			;
		**result = str[i];
		count--;
	}
	return (result); 
}

int	main(void)
{
	char	*str = "Test_WOW__lol______";
	char	*charset = "_";
	int	count;
	int	i;

	i = 0;
	count = 1;
	printf("args = %d\n", str_charset_check(str, charset, count));
	while (i <= count)
	{
		printf("%s", ft_split(str, charset)[i]);
	}
	return (0);
}
