#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_frombase(char *nbr, char *base_from, int s_base);

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

char	*ft_create_p(int nbr, int s_base)
{
	char	*new_nbr;
	int		aux;
	int		len;

	len = 0;
	aux = nbr;
	while ((aux / s_base) >= s_base)
	{
		aux = aux / s_base;
		len++;
	}
	new_nbr = malloc(len + 2);
	*(new_nbr + len + 1) = '\0';
	return (new_nbr);
}

char	*change_base(int nbr, int s_base)
{
	int		i;
	char	*new_nbr;

	new_nbr = ft_create_p(nbr, s_base);
	i = 1;
	while ((nbr / s_base) >= s_base)
	{
		nbr = nbr / s_base;
		*(new_nbr + i) = nbr % s_base + '0';
		i++;
	}
	*(new_nbr + i) = nbr / s_base + '0';
	return (new_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		bf_size;
	int		bt_size;
	int		number10;
	char	*new_nbr;

	bf_size = check_base(base_from);
	bt_size = check_base(base_to);
	if ((bf_size <= 1) || (bt_size <= 1))
		return (0);
	number10 = ft_atoi_frombase(nbr, base_from, bf_size);
	new_nbr = change_base(number10, bt_size);
	return (new_nbr);
}
