#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[40] = "String st1 sre str";
	char str2[] = "sasd";
	char *s1;
	char *s2;

	s1 = str1;
	s2 = str2;
	s1 = ft_strstr(s1, s2);
	while (*s1)
	{
		write (1, s1, 1);
		s1++;
	}
	write (1, "\n", 1);
	return (0);
}