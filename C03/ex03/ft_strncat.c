/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:05:59 by stribeir          #+#    #+#             */
/*   Updated: 2022/07/27 18:02:19 by stribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
   unsigned  int    i1;
   unsigned int    i2;

    i1 = 0;
    while (dest[i1] != '\0')
    i1++;

    i2 = 0;

    while (src[i2] != '\0' && i2 < nb)
    {
        dest[i1] = src[i2];
        i1++;
        i2++;
    }
    dest[i1] = '\0';
    return (dest);
}

int main()
{
	char ini[] = "stei";
	char fim[] = "phani";
	char nb = 3;

	printf("%s", ft_strncat(ini, fim, nb));

	return(0);
}
