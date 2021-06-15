#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	while (*str != '\0')
	{
		i = 0;
		while ((*str == *to_find) && (*str != '\0'))
		{
			str++;
			to_find++;
			i++;
		}
		if (*to_find == '\0')
			return (str - i);
		to_find = to_find - i;
		str++;
	}
	return (NULL);
}
