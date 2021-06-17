#include <unistd.h>

int	ft_pow(int nbr, int e)
{
	int	result;

	result = 1;
	while (e > 0)
	{
		result = result * nbr;
		e--;
	}
	return (result);
}

int	ft_calcunbr(char *str, int len)
{
	int	number;

	number = 0;
	while (len > 0)
	{
		number = number + (*(str - len) - 48) * ft_pow(10, (len - 1));
		len--;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	len;
	int	sign;

	len = 0;
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
	while (*str)
	{
		if ((*str < '0') || (*str > '9'))
			break ;
		len++;
		str++;
	}
	if (len > 0)
		return (sign * ft_calcunbr(str, len));
	return (0);
}
