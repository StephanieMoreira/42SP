char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str)
{
	int c;

	c = 0;

while (str[c] != '\0')
{
	if (str[c] >= 65 && str[c] <= 90)
		str[c] += 32;
		c++;
}
return (&str[0]);
}	

int main()
{
	char mini[] = "STE VAI";

	printf("%s", ft_strlowcase(mini));

	return(0);
}
