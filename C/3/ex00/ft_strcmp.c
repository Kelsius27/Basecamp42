int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while ((*string1 != '\0') || (*string2 != '\0'))
	{
		if (*string1 < *string2)
			return (*string1 - *string2);
		else if (*string1 > *string2)
			return (*string1 - *string2);
		else
		{
			string1++;
			string2++;
		}
	}
	return (0);
}
