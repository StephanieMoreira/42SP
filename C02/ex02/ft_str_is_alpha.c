int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
	int alf;
	alf = 0;

	while( str[alf] != '\0')
	{	
		if ((str[alf] <  'A' || str[alf] > 'Z') && (str[alf] < 'a' || str[alf] > 'z'))
			return(0);
		alf++;
	}
	return(1);
}

int main()
{
	
	char l_alfa[] = "sozinha";
	char l_espe[] = "á é í ô";
	char l_cara[] = "";

	printf("%d", ft_str_is_alpha(l_espe));
	
	return(0);
}

		
