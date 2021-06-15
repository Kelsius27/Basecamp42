#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main (void)
{
	char	palavra1[] = "teste";
	char	palavra2[40] = "";
	char	*fonte, *destino;

	fonte = palavra1;
	destino = palavra2;
	destino = ft_strcpy(destino, fonte);
	while (*destino != '\0')
	{
		write (1, destino, 1);
		destino++;
	}
	return (0);
}
