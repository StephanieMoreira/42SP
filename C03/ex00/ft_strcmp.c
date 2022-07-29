/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:11:15 by stribeir          #+#    #+#             */
/*   Updated: 2022/07/27 17:24:39 by stribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i] && (s1 != '\0') &&  (s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char str1[] = "stefan";
	char str2[] = "stepha";

	printf("%d", ft_strcmp(str1, str2));

	return(0);
}
