/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:27:04 by stribeir          #+#    #+#             */
/*   Updated: 2022/07/27 17:47:38 by stribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
                return (str + i);
            j++;
        }
        i++;
    }
    return (0x0);
}

int main()
{
	char ini[] = "batato hab hal has has";
	char loc[] = "has";

	printf("%s\n", ft_strstr(ini, loc));
	printf("%s\n", strstr(ini, loc));
	return(0);
}	


