/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:13:46 by ylasbord          #+#    #+#             */
/*   Updated: 2022/08/03 13:26:25 by ylasbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;
	unsigned int	k;

	j = ft_strlen(dest);
	k = ft_strlen(src);
	i = 0;
	if (k < nb)
		nb = k;
	while (i < nb && src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_all;
	char	*join;

	size_all = 0;
	i = -1;
	size -= 1;
	if (size < 0)
	{
		join = malloc(sizeof(char));
		return (join);
	}
	while (i++ < size)
		size_all += ft_strlen(strs[i]);
	join = malloc(size_all + ((size + 1) * ft_strlen(sep)));
	i = -1;
	while (i++ < size)
	{
		ft_strncat(join, strs[i], ft_strlen(strs[i]));
		ft_strncat(join, sep, ft_strlen(sep));
	}
	i = ft_strlen(sep);
	while (i--)
		join[ft_strlen(join) - 1] = '\0';
	return (join);
}
