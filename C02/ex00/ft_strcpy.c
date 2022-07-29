#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while ( ( dest[i] != '\0') && ( src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
	int main()
	{
		char print[] = "stephanie";
		char fran[] = "lagar";
		ft_strcpy(print, fran);
		printf("%s", print);
		return(0);
	}
