/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repalce.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:25:40 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/15 18:28:08 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 4)
	{
		while (av[1][i])
		{
			// Make code
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}