int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	root = 1;
	while (root <= 46340)
	{
		if (nb == (root * root))
			return (root);
		root++;
	}
	return (0);
}
