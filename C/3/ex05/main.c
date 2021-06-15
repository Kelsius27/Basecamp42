#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main (void)
{
	char			palavra1[40] = "0123456789";
	char			palavra2[21] = "0123456789";
	char			*fonte, *destino;
	int				qtd;
	unsigned int	s;
	qtd = 40;
	fonte = palavra1;
	destino = palavra2;
	s = ft_strlcat(destino, fonte, qtd);
	printf("%u\n", s);
	while (*destino != '\0')
	{
		write (1, destino, 1);
		destino++;
	}
	return (0);
}
