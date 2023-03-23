/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:45:35 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 21:53:57 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	if (ac == 2)
	{
		i = 0;
		repeat = 1;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat = av[1][i] - 'a' + 1;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat = av[1][i] - 'A' + 1;
			else
				write(1, &av[1][i], 1);
			while (repeat)
			{
				write(1, &av[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
