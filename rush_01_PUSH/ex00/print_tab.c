/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarina <lfarina@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:29:44 by lfarina           #+#    #+#             */
/*   Updated: 2022/07/24 11:04:26 by lfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_tab(int tab[4][4], int col, int lin)
{
	int	x;
	int	y;

	y = 0;
	while (y < col)
	{
		x = 0;
		while (x < lin)
		{
			write(1, &tab[y][x], 1);
			if (x < lin - 1)
				write(1, " ", 1);
			x++;
		}
		y++;
		write(1, "\n", 1);
	}
}
