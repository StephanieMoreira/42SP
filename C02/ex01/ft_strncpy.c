#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int start ;

	start= 0;

	while( start < n)
	{
		dest[start] = src[start];
		start++;
	}
	src[start] = '\0';
	return(dest);
}

int main()
{
	char dest[] = "quem sabe";
	char src[] = "eu ja sei";
	int n = 3;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	
	return(0);
}

