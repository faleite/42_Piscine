/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:56:14 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/08 21:09:42 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size -1)
		{
			tmp = tab[i];
			if (tab[i] > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}
