/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ac_av.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:58:27 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/17 13:44:59 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int fstrlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *rev(char *str)
{
	int i;
	int len;
	int tmp;

	i = 0;
	len = fstrlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}


#include <stdio.h>
int	main(void)
{
	char	str[] = "   ---+--+1234ab567";
	
	printf("%s", rev(str));
	return (0);
}
