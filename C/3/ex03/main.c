#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[40] = "String 1 e ";
	char str2[20] = "string 2.";
	char *s1;
	char *s2;

	s1 = str1;
	s2 = str2;
	s1 = ft_strncat(s1, s2, 7);
	while (*s1)
	{
		write (1, s1, 1);
		s1++;
	}
	write (1, "\n", 1);
	return (0);
}