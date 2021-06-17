#include <stdio.h>

int	ft_strlen(char *str);

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
