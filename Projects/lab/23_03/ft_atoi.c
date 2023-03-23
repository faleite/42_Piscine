/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:28:29 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/23 19:27:34 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	mn;
	int	nb;

	i = 0;
	mn = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mn++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (!(mn % 2))
		return (nb);
	return(-nb);
}

#include <stdio.h>
/*int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                printf("%d", ft_atoi(argv[1]));
        }
        return (0);
}
*/
int	main(void)
{
	char *str;
	str = "   ---+--+1234ab56473 ";

	ft_atoi(str);

	printf("%d", ft_atoi(str));
	return (0);
}
