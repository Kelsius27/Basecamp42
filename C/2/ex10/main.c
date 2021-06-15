#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int	main (void)
{
	char			palavra1[] = "Kel";
	char			palavra2[3] = "";
	char			*fonte, *destino;
	int				qtd;
	unsigned int	s;
	qtd = 3;
	fonte = palavra1;
	destino = palavra2;
	s = ft_strlcpy(destino, fonte, qtd);
	printf("%u\n", s);
	while (*destino != '\0')
	{
		write (1, destino, 1);
		destino++;
	}
	return (0);
}
