/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:10:36 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/03 15:03:55 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int		i;

	i = -1;
	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[++i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}
