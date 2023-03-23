/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:53:36 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/05 11:58:31 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char a, char b);

void	rush(int x, int y)
{
	int	j;

	if (x > 0 && y > 0)
	{
		if (y != 1)
		{
			ft_print_line(x, 'o', '-');
			j = 0;
			while (j < y - 2)
			{
				ft_print_line(x, '|', ' ');
				j++;
			}
		}	
		ft_print_line(x, 'o', '-');
	}
}

void	ft_print_line(int x, char a, char b)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		i++;
	}
	ft_putchar('\n');
}
