/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:38:40 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/23 20:16:33 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*ptr;
	int	len;

	ptr = malloc(sizeof(int) * (end - start));
	if (start >= end || ptr == NULL)
		return (NULL);
	len = 0;
	while (start <= end)
		ptr[len++] = start++;
	return (ptr);
}

#include <stdio.h>
int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(-1, 2);
	i = 0;
	while (i < 4)
	{
		printf("%d ", range[i]);
		i++;
	}

}
