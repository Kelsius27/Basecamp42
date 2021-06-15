void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main(void)
{
	int n1 = 10;
	int n2 = 4;
	int resultado, resto;

	int *div, *mod;

	div = &resultado;
	mod = &resto;
	ft_div_mod(n1, n2, div, mod);
	printf("%d / %d = %d resto %d\n", n1, n2, resultado, resto);
	return (0);
}
