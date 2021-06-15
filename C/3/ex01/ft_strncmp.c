int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*string1 < *string2)
			return (*string1 - *string2);
		else if (*string1 > *string2)
			return (*string1 - *string2);
		else
		{
			string1++;
			string2++;
			i++;
		}
		if ((*string1 == '\0') && (*string2 == '\0'))
			return (0);
	}
	return (0);
}
