/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:06:37 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/26 12:48:10 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc((max) * sizeof(int));
	i = 0;
	if (min >= max)
		return (NULL);
	while (i + min <= max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
