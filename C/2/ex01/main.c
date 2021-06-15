#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main (void)
{
	char	palavra1[] = "Kellsey";
	char	palavra2[40] = "";
	char	*fonte, *destino;
	int		qtd;

	qtd = 2;
	fonte = palavra1;
	destino = palavra2;
	destino = ft_strncpy(destino, fonte, qtd);
	while (*destino != '\0')
	{
		write (1, destino, 1);
		destino++;
	}
	return (0);
}
