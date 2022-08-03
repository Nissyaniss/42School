/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:57:32 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/28 23:38:30 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] == '\0')
			return (-1);
		else if (s2[i] == '\0')
			return (1);
		else
			i++;
	}
	return (0);
}

int main() 
{
	printf("Machine = %d\n\n", strncmp("GG CTTATG", "GGCCTTATG", 2));

	printf( "Moi = %d\n", ft_strncmp( "GG CTTATG", "GGCCTTATG", 2));
}
