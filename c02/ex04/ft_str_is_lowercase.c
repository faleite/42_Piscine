/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:28:42 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/09 19:36:49 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int     main(void)
{
	/* char str[] = "a2cdekisjgiwb"; */
	/* char    str[] = "[a12;,."; */
        /* char str[] = "AbcDfzZ"; */
	char str[] = "";
	int     test;

        test = ft_str_is_lowercase(str);

        printf("Test return: %d\n", test);

        return (0);
}

