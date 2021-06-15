void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main(void)
{
	int n1 = 1;
	int n2 = 4;

	int *a, *b;

	a = &n1;
	b = &n2;
	printf("Numero 1 %d Numero 2 %d\n", n1, n2);
	ft_swap(a, b);
	printf("Numero 1 %d Numero 2 %d\n", n1, n2);
	return (0);
}
