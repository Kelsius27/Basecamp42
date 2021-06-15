char	*ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str + 32;
	return (str);
}

char	*ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	return (str);
}

int	ft_str_is_numeric(char *str)
{
	if ((*str < '0' || *str > '9'))
		return (0);
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*array;
	int		len;

	array = str - 1;
	len = 0;
	while (*str)
	{
		if (len == 0)
			str = ft_strupcase(str);
		else
		{
			if (ft_str_is_numeric(array) || ft_str_is_alpha(array))
				str = ft_strlowcase(str);
			else
				str = ft_strupcase(str);
		}
		str++;
		len++;
		array++;
	}
	return (str - len);
}
