#include <unistd.h>

int ft_str_is_alpha(char *str);

int	main (void)
{
	char	palavra1[] = "";
	char	*fonte;
	int		resultado;
	char	print;

	fonte = palavra1;
	resultado = ft_str_is_alpha(fonte);
	print = resultado + '0';
	write (1, &print, 1);
	
	return (0);
}
