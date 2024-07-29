/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:50:54 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/02 12:32:04 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	np;

	if (n < 0)
	{
		np = 'N';
		write(1, &np, 1);
	}
	else
	{
		np = 'P';
		write(1, &np, 1);
	}
}

/*int main(void)
{
	int 	n;
	
	n = -1; 
	ft_is_negative(n);
	
	return 0;
} 
*/
