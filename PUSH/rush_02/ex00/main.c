/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 06:30:43 by nloisy            #+#    #+#             */
/*   Updated: 2022/07/31 22:44:57 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes.h"

int	main(int argc, char **argv)
{
	char	***numbers;

	if (ft_check_error(argc, argv))
	{
		ft_parse(&numbers);
		ft_printvalue(&numbers, "103");
	}
}
