char *ft_strcapitalize(char *str);

char *ft_strlowcase(char *str);


char *ft_strcapitalize(char *str)
{
	int num;

	ft_strlowcase(str);
	num = 0;
	while (str[num] != '\0')
	{
		if ((num == 0 && str[num] >= 97 && str[num] <= 122) ||
				((str[num - 1] >= 32) && (str[num - 1] <= 47) && 
				(str[num] >= 97) && (str[num] <= 122)) || 
				((str[num - 1] >= 58) && (str[num - 1] <= 64) && 
				(str[num] >= 97) && (str[num] <= 122)) || 
				((str[num - 1] >= 91) &&( str[num - 1] <= 96) && 
				(str[num] >= 97) && (str[num] <= 122)) || 
				((str[num - 1] >= 123) &&( str[num - 1] <= 126) && 
				(str[num] >= 97) && (str[num] <= 122)))
				{
					str[num] = str[num] - 32;
				}
		num ++;
	}
	return(str);
}

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
return(str);
}
int main()
{
	char strin[] = "vou 42passar *hoje &nois";

	printf("%s", ft_strcapitalize(strin));

	return(0);
}

