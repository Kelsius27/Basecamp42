char	*ft_strncat(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while ((*s2 != '\0') && (n > 0))
	{
		*s1 = *s2;
		s1++;
		s2++;
		i++;
		n--;
	}
	*s1 = '\0';
	return (s1 - i);
}
