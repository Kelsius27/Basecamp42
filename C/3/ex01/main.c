#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "abcdef";
	char str2[] = "abcdef";
	char *s1;
	char *s2;
 	int ret;

	s1 = str1;
	s2 = str2;
	ret = ft_strncmp(s1, s2, 4);
	if(ret < 0)
		printf("str1 is less than str2");
	else if(ret > 0)
		printf("str2 is less than str1");
	else
		printf("str1 is equal to str2");
	return (0);
}