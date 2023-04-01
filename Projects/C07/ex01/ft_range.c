/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:10:39 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/23 20:07:16 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;

	ptr = malloc(sizeof(int) * (max - min));
	if (min >= max || ptr == NULL)
		return (NULL);
	len = 0;
	while (min < max)
		ptr[len++] = min++;
	return (ptr);
}
#include <stdio.h>
int     main(void)
{
        int     min;
        int     max;
        int     *array;
        int     i;
        int     len;

        min = 0;
        max = 10;
        i = 0;
        len = max - min;

        array = ft_range(min, max);

        while (i < len)
        {
                printf("%d ", array[i]);
                i++;
        }
        return (0);
}

