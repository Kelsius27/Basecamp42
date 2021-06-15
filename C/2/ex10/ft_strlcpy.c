unsigned int	ft_sizeof(char *str)
{
	unsigned int	size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;
	unsigned int	sizesrc;

	sizesrc = ft_sizeof(src);
	len = 0;
	while ((*src != '\0') && (len < (n - 1)))
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	*dest = '\0';
	return (sizesrc);
}
