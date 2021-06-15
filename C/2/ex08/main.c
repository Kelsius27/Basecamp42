#include <unistd.h>

char	*ft_strlowcase(char *str);

int	main (void)
{
	char	palavra1[] = "hdH21A+*%fhef ffEF ef";
	char	*fonte;

	fonte = palavra1;
	fonte = ft_strlowcase(fonte);
	while (*fonte)
	{
		write (1, fonte, 1);
		fonte++;
	}
	return (0);
}
