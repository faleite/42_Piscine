/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:04:21 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/21 12:25:07 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!j && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots (quarante-deux; cinquante+et+un";

    printf("Before: %s\n", str);

    ft_strcapitalize(str);

    printf("After: %s\n", str);

    return 0;
}

