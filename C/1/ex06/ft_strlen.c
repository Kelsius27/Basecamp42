int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	main(void)
{
	char	palavra[] = "Amauri William!";
	char	*primeiro_str;
	int l;

	primeiro_str = palavra;
	l = ft_strlen(primeiro_str);
	printf("Tamanho %d\n", l);
	return (0);
}
