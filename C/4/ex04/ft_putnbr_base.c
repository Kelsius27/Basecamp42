#include <unistd.h>
#include <stdio.h>

int	check_base(char *base)
{
	int	size;
	int	i;

	size = 0;
	while (*base)
	{
		i = 1;
		if ((*base == '-') || (*base == '+'))
			return (0);
		while (*(base + i))
		{
			if (*(base + i) == *base)
				return (0);
			i++;
		}
		size++;
		base++;
	}
	return (size);
}

int	change_base(int nbr, int *new_nbr, int s_base)
{
	int	i;

	*new_nbr = *new_nbr + (nbr % s_base);
	i = 1;
	while ((nbr / s_base) >= s_base)
	{
		nbr = nbr / s_base;
		*(new_nbr + i) = nbr % s_base;
		i++;
	}
	*(new_nbr + i) = nbr / s_base;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s_base;
	int	i;
	int	new_nbr[32];

	new_nbr[0] = 0;
	s_base = check_base(base);
	if (s_base <= 1)
		return ;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			nbr = -2147483647;
			new_nbr[0] = 1;
		}
		nbr = -nbr;
		write(1, "-", 1);
	}
	i = change_base(nbr, new_nbr, s_base);
	while (i >= 0)
	{
		write(1, (base + new_nbr[i]), 1);
		i--;
	}
}
