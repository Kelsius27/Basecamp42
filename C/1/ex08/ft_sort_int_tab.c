int	troca(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
	return (1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	houvetroca;
	int	i;
	int	*array;

	array = tab + 1;
	houvetroca = 1;
	while (houvetroca)
	{
		i = 0;
		houvetroca = 0;
		while (i < size - 1)
		{
			if (*array < *tab)
			{
				houvetroca = troca(array, tab);
			}
			tab++;
			array++;
			i++;
		}
		tab = tab - (size - 1);
		array = array - (size - 1);
	}
}
