/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:44:09 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/28 23:53:30 by ylasbord         ###   ########.fr       */
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

char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return(0);
	i = 0;
	while (i <= size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len;

	if (ft_strlcpy(dest + ft_strlen(dest), src, size) == 0)
	{
		return (0);
	}
	len = ft_strlen(dest);
	return (len + 1);
}

int main() 
{
	char *src = "SRC";
	char *dest = "DEST_";

	printf("%d\n",ft_strlcat(dest, src, 3));
	printf("%s\n",dest);
}