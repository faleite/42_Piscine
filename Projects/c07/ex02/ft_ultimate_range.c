/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:10:55 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 10:02:27 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	len;

	len = max - min;
	ptr = malloc(sizeof(int) * (len));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (ptr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
		ptr[i++] = min++;
	*range = ptr;
	return (len);
}
/*
 * #include <stdio.h>
int     main(void)
{
        int     min;
        int     max;
        int     size;
        int     *array;
        int     i;

        min = 0;
        max = 10;
        size =  ft_ultimate_range(&array, min, max);
        i = 0;
        while (i < size)
                printf("%d ", array[i++]);
}
*/
