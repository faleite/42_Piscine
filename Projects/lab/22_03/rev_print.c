/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:05:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 22:19:03 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	/* int	i; */
	int	len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		/* i = 0; */
		while (av[1][len])
			write(1, &av[1][len--], 1);
	}
	write(1, "\n", 1);
	return (0);
}
