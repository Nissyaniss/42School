/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:15:37 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/27 19:24:20 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}


int main() 
{
	char	test[] = "test";
	char	test0[] = "TEST";
	const char	test1[] = "test";
	const char	test2[] = "TEST";


	printf( "Machine (same) = %d\n", strcmp(test1, test1) );
	printf( "Moi (same) = %d\n\n", ft_strcmp(test, test) );

	printf( "Machine (pos) = %d\n", strcmp(test1, test2) );
	printf( "Moi (pos) = %d\n\n", ft_strcmp(test, test0) );

	printf( "Machine (neg) = %d\n", strcmp(test2, test1) );
	printf( "Moi (neg) = %d\n", ft_strcmp(test0, test) );
}
