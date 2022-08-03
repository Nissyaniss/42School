#include <stdio.h>

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

int main()
{
	char *str = "WO6t486WtestW456OW";
	char *to_find = "test";
	printf("%s",ft_strstr(str, to_find));
	return 0;
}
