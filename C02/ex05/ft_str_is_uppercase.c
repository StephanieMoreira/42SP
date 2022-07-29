int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str)
{
	int c;
	c = 0;
	
	while(str[c] != '\0')
	{
		if((str[c] < 'A') || (str[c] > 'Z'))
		{
		return(0);
		}
		c++;
	}
	if (*str == '\0')
	{
	return(1);
}
else 
{
return(1);
}
}

int main()
{
	char maxi[] = "ABSDT";
	char mini[] = "otgki";

	printf("%d",ft_str_is_uppercase(maxi));

	return(0);
}

