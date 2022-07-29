/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:29:30 by stribeir          #+#    #+#             */
/*   Updated: 2022/07/28 17:29:53 by stribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		write (1, &str[pos], 1);
		pos++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	pos;

	pos = argc;
	while (pos > 1)
	{
		ft_putstr(argv[--pos]);
	}
	return (0);
}
