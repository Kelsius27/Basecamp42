#include <unistd.h>

void	ft_print_comb(void)
{
	char	numero[3];

	numero[0] = '0';
	while (numero[0] <= '7')
	{
		numero[1] = numero[0] + 1;
		while (numero[1] <= '8')
		{
			numero[2] = numero[1] + 1;
			while (numero[2] <= '9')
			{
				write (1, &numero, 3);
				if (numero[0] != '7')
					write (1, ", ", 2);
				numero[2]++;
			}
			numero[1]++;
		}
		numero[0]++;
	}
}
