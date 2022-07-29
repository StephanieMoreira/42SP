/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:31:19 by stribeir          #+#    #+#             */
/*   Updated: 2022/07/27 17:30:01 by stribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int start;

	start = 0;
	
	while ((s1 != '\0' || s2 != '\0') && start < n)
	{
		if (s1[start] != s2[start])
			return (s1[start] - s2[start]);
		start++;
	}
	return (0);
}

int main()
{
	char s1[] = "aab";
	char s2[] = "aaaa";
	int n = 2;

	printf("%d", ft_strncmp(s1, s2, n));

	return(0);
}

