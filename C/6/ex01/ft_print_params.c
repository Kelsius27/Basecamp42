#include <unistd.h>

void	ft_print_params(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 0)
		ft_print_params(argc, argv);
	return (0);
}
