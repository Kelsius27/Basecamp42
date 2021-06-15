void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	if (*b != 0)
	{
		aux = *a / *b;
		*b = *a % *b;
		*a = aux;
	}
}

int main(void)
{
	int n1 = 10;
	int n2 = 4;

	int *a, *b;

	a = &n1;
	b = &n2;
	printf("%d / %d\n", n1, n2);
	ft_ultimate_div_mod(a, b);
	printf("Resultado %d resto %d\n", n1, n2);
	return (0);
}
