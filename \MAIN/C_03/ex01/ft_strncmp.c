/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:57:32 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/25 13:41:28 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

int main() {

	printf("Machine (0) = %d\n", strncmp("toto", "tot ", 4));
	printf( "Machine (10) = %d\n\n", strncmp( "toto", "j", 1));

	printf( "Moi (0) = %d\n", ft_strncmp( "toto", "tot ", 4));
	printf( "Moi (10) = %d\n", ft_strncmp( "toto", "j", 1));
}
