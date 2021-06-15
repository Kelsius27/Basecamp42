char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (len < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
			*dest = 0;
		dest++;
		len++;
	}
	return (dest - len);
}
