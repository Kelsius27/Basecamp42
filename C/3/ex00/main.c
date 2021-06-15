#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "abcde";
	char str2[] = "abcde";
	char *s1;
	char *s2;
 	int ret;

	s1 = str1;
	s2 = str2;
	ret = strcmp(s1, s2);
	printf("%d\n", ret);
	if(ret < 0)
		printf("str1 is less than str2");
	else if(ret > 0)
		printf("str2 is less than str1");
	else
		printf("str1 is equal to str2");
	return (0);
}