/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:16:19 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/28 23:43:42 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	j;
	unsigned int	k;

	j = ft_strlen(dest);
	k = ft_strlen(src);
	i = 0;
	if (k < nb)
		nb = k;
	while (i < nb && src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main() 
{
	char src[] = "123456789";
	printf("src_begin = %s\n", src);
	char dest[255] = "lol";
	printf("dest_begin = %s\n", dest);

	char dest1[255] = "lol";

	printf("\nMoi     = %s\n", ft_strncat(dest, src, 7));
	printf("Machine = %s\n", strncat(dest1, src, 7));
}