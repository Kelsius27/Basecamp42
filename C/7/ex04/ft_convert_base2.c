#include <stdio.h>
#include <stdlib.h>

int	ft_str10_int(char *number, int s_base)
{
	int	nbr;

	if (*number == '\0')
		return (0);
	nbr = *number - 48;
	number++;
	while (*number != '\0')
	{
		nbr = nbr * s_base + (*number - 48);
		number++;
	}
	return (nbr);
}

char	*ft_base_base(char *str, char *base_from, char *number, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (*(base_from + j))
		{
			if (*(base_from + j) == *str)
			{
				*(number + i) = j + '0';
				break ;
			}
			j++;
		}
		i++;
		str++;
	}
	return (number);
}

char	*ft_str_base10(char *str, char *base_from)
{
	int		len;
	int		i;
	char	*number;

	len = 0;
	while (*str)
	{
		i = 0;
		while (*(base_from + i))
		{
			if (*str == *(base_from + i))
				break ;
			i++;
		}
		if (*(base_from + i) == '\0')
			break ;
		len++;
		str++;
	}
	number = malloc (len + 1);
	*(number + len) = '\0';
	number = ft_base_base((str - len), base_from, number, len);
	return (number);
}

int	ft_atoi_frombase(char *str, char *base_from, int s_base)
{
	int		nbr;
	int		sign;
	char	*number;

	sign = 1;
	while ((*str == ' ') || (*str == '\f') || (*str == '\v') || (*str == '\r')
		|| (*str == '\n') || (*str == '\t'))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	number = ft_str_base10(str, base_from);
	nbr = ft_str10_int(number, s_base);
	free (number);
	printf("%d\n", nbr);
	if (nbr > 0)
		return (sign * nbr);
	return (0);
}
