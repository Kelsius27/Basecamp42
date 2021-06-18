#include <unistd.h>

void	ft_print_program_name(char *argv[])
{
	while (*argv[0])
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 0)
		ft_print_program_name(argv);
	return (0);
}
