#include <unistd.h>

char	*ft_strupcase(char *str);

int	main (void)
{
	char	palavra1[] = "hdHDA+*%fhef ffEF ef";
	char	*fonte;

	fonte = palavra1;
	fonte = ft_strupcase(fonte);
	while (*fonte)
	{
		write (1, fonte, 1);
		fonte++;
	}
	return (0);
}
