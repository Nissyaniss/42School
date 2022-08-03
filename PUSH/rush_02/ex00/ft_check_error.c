/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:27:59 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/31 20:18:44 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_check_error(int argc, char **argv)
{
	char	*str;

	str = "Error\n";
	if (argc == 2)
		if (ft_atoi_dom(argv[1]) >= 0 && ft_str_is_numeric(argv[1]))
			return (1);
	else if (ft_str_is_numeric(argv[1]))
		return (1);
	else
		ft_putstr(str);
	else if (argc == 3)
		if (ft_str_is_numeric(argv[2]))
			return (1);
	else
		ft_putstr(str);
	else if (argc > 3)
		ft_putstr(str);
	if (argc == 1)
		ft_putstr(str);
	return (0);
}
