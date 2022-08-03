/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:04:55 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/25 15:41:18 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int main()
{
	char dest1[] = "loll";
	const char src[] = "src";
	char src1[] = "src";
	printf("moi      = %s\n", ft_strcpy(dest1, src1));
	printf("commande = %s",strcpy(dest1, src));
}
