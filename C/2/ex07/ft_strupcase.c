char	*ft_strupcase(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
		len++;
	}
	return (str - len);
}
