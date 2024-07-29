/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:29:17 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/19 14:59:43 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (n == 0)
		return (1);
	while (nb > 1)
	{
		n *= nb - 1;
		nb--;
	}
	return (n);
}
