#include <unistd.h>


char	*ft_strcapitalize(char *str);

int	main (void)
{
	char	palavra1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	*fonte;

	fonte = palavra1;
	fonte = ft_strcapitalize(fonte);
	while (*fonte)
	{
		write (1, fonte, 1);
		fonte++;
	}
	return (0);
}
