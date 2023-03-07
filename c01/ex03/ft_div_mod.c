/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:50:55 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/07 19:27:00 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main()
{
	int	y;
	int	z;

	y = 4;
	z = 2;

	ft_div_mod(&y, &z);

	printf("Val y: %d\nVal z: %d\n", y, z);
}
