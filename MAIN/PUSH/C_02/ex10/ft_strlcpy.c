/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:38:03 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/25 12:42:44 by ylasbord         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	if (i < size)
		src[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char dest[] = "loll";
	char src[] = "src";
	printf("len = %d\n", ft_strlcpy(dest, src, 11));
	printf("result = %s\n", src);
}
