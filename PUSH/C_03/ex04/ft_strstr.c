/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:24:23 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/27 19:52:35 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		i0;
	char	*test;

	i = 0;
	i0 = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + i0] == to_find[i0])
		{
			if (i0 == 0)
				test = &str[i];
			i0++;
			if (i0 == ft_strlen(to_find))
				return (test);
		}
		i0 = 0;
		i++;
	}
	return ((0));
}
