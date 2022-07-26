/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:10:34 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/24 23:02:00 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] && ++a)
		;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = src;
	src = malloc((ft_strlen(src) + 1) * sizeof(char));

	return (ptr);
}

int	main()
{
	char	*src = "char";

	printf("src_begin = %s\n", src);
	printf("src_last = %s", ft_strdup(src));
	return (0);
}
