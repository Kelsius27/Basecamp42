#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	palavra[] = " \n \t \r \v --+-+-+-2147483648asd";
	char	*primeiro_str;

	primeiro_str = palavra;
	printf("%d\n", ft_atoi(palavra));
	return (0);
}
