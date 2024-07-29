/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:02:00 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/19 17:53:26 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	self;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	self = 1;
	while (power > 0)
	{
		self *= nb;
		power--;
	}
	return (self);
}
