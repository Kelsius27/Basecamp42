void ft_putstr_non_printable(char *str);

int main(void)
{
	char	texto[] = {-3, 200, 255};
	char	*str;

	str = texto;
	ft_putstr_non_printable(str);
	return (0);
}
