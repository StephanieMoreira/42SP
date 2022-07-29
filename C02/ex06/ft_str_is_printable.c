int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (((str[c] >= 0) && (str[c] < 32 )) || (str[c] == 127))
		{
		return (0);
		}
	c++;
	}
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
	return (1);
	}
}

int main()
{
	char impri[] = "g57kp9";
	char espec[] = "\t\r\n\x7f";
	
		printf("%d",ft_str_is_printable(espec));
	
	return(0);
}

