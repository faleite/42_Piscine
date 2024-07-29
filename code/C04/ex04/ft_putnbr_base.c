/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:21:56 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/16 20:58:43 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_equal(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b_val;

	b_val = 0;
	while (base[b_val])
	{
		if (base[b_val] == '+' || base[b_val] == '-')
			return ;
		b_val++;
	}
	if (b_val < 2)
		returni ;
	if (ft_equal(base[b_val]))
		return ;
}

int	main(int argc, char **argv)
{
	int		n;
	char	*base;

	n = ft_atoi(argv[1]);
	base = argv[2];
	ft_putnbr_base(n, base);
}
