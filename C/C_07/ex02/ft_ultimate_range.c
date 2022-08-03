/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:49:16 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/02 14:38:26 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = -1;
	if (min >= max)
	{
		*range = ((0));
		return (0);
	}
	else
		*range = malloc((max - min) * sizeof(int));
	while ((++i + min) <= max)
		(*range)[i] = min + i;
	return (i);
}
