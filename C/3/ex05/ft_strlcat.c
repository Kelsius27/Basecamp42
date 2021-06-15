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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	len;
	unsigned int	sizesrc;
	unsigned int	sizedest;

	sizesrc = ft_sizeof(src);
	sizedest = ft_sizeof(dest);
	dest = dest + sizedest;
	len = 0;
	while ((*src != '\0') && (len < (n - sizedest - 1)))
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	*dest = '\0';
	return (sizesrc + sizedest);
}
