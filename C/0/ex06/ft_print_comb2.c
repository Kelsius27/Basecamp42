#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_comb2(void)
{
	int	numero1;
	int	numero2;

	numero1 = 0;
	while (numero1 < 99)
	{
		numero2 = numero1 + 1;
		while (numero2 <= 99)
		{
			ft_putchar(numero1 / 10 + '0');
			ft_putchar(numero1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(numero2 / 10 + '0');
			ft_putchar(numero2 % 10 + '0');
			numero2++;
			if (numero1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		numero1++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
