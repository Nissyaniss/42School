/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:05:52 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/26 12:47:15 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

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

int	main()
{
	int	min;
	int max;

	min = 100;
	max = 200;
	for(int i = 0; i <= min; i++)
		printf("%d ", ft_range(min, max)[i]);
	return (0);
}
