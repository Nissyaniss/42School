/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:49:35 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/26 13:29:32 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	range = malloc((max) * sizeof(int));
	i = 0;
	if (min >= max)
		return (0);
	while (i + min <= max)
	{
		*range[i] = min + i;
		i++;
	}
	return (i);
}

int	main()
{
	int	min;
	int	max;
	int	**range;

	min = 100;
	max = 200;
	for(int i = 0; i <= min; i++)
		printf("%d ", ft_ultimate_range(range, min, max));
	return (0);
}
