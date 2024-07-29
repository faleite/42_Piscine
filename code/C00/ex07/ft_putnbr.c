/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:28:12 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/05 18:18:47 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
	}	
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
