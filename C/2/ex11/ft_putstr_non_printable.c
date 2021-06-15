#include <unistd.h>

void	ft_chartohex(char c, char *p)
{
	int	nbr;

	nbr = c;
	if (nbr < 0)
		nbr = nbr + 256;
	if ((nbr >= 0) && (nbr <= 255))
	{
		if (nbr / 16 >= 10)
			*p = (nbr / 16) + 87;
		else
			*p = (nbr / 16) + 48;
		p++;
		if (nbr % 16 >= 10)
			*p = (nbr % 16) + 87;
		else
			*p = (nbr % 16) + 48;
		p++;
	}
	*p = '\0';
}

int	ft_str_is_printable(char c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa[3];
	char	*p;

	while (*str != '\0')
	{
		if (ft_str_is_printable(*str) == 1)
			ft_putchar(*str);
		else
		{
			write (1, "\\", 1);
			p = hexa;
			ft_chartohex(*str, p);
			while (*p)
			{
				write (1, p, 1);
				p++;
			}
		}
		str++;
	}	
}
