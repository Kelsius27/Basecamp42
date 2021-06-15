#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *s1, char *s2);

int main(void)
{
	char str1[40] = "String 1 e ";
	char str2[] = "stri.";
	char *s1;
	char *s2;

	s1 = str1;
	s2 = str2;
	s1 = ft_strcat(s1, s2);
	while (*s1)
	{
		write (1, s1, 1);
		s1++;
	}
	write (1, "\n", 1);
	return (0);
}