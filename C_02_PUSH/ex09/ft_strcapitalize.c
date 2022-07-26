/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:13:33 by ylasbord          #+#    #+#             */
/*   Updated: 2022/07/25 15:54:53 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (is_alphanum(str[i - 1]))
				str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(is_alphanum(str[i - 1])))
				str[i] -= 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}
