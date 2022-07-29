/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:26:08 by stribeir          #+#    #+#             */
/*   Updated: 2022/07/28 19:14:56 by stribeir         ###   ########.fr       */
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

	pos = 1;
	while (pos < argc)
	{
		ft_putstr(argv[pos]);
		pos++;
	}
	return (0);
}
