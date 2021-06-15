void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	numeros[] = {10, 5, 5, -8, 147, 58};
	int	i = 0;
	int	*tabela;

	tabela = numeros;
	while (i < 6)
	{
		printf("%d ", numeros[i]);
		i++;
	}
	ft_sort_int_tab(tabela, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d ", numeros[i]);
		i++;
	}
	return (0);
}
