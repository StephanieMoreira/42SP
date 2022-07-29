char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
	int c;

	c = 0;

	while(str[c])
	{
		if (str[c] >= 97 && str[c] <= 122)
			str[c] -= 32;
		c++;
	}
	return(&str[0]);
}

int main()
{
	char meta[] = "ste linda";

		printf("%s", ft_strupcase(meta));
		
		return(0);
}
