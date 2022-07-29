#include <stdio.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
	int start;
	start = 0;

	while( str[start] != '\0')
	{
		if (str[start] < '0' || str[start] > '9')

			return(0);

		str++;
	}
	return(1);
}

int main() 
{
	char number[] = "1258";
	char letras[] = "abcd";
	
	printf("%d", ft_str_is_numeric(letras));

	return(0);
}
