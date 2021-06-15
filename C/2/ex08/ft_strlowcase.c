char	*ft_strlowcase(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
		len++;
	}
	return (str - len);
}
