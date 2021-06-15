void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int i;
	int *nbr;

	nbr = &i;
	ft_ft(nbr);
	printf("%d\n", i);
	return (0);
}
