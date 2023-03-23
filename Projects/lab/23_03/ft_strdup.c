/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:20:12 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/23 20:42:08 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	slen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*scpy(char *d, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * (slen(src) + 1));
	if (ptr == NULL)
		return (NULL);
	scpy(ptr, src);
	return (ptr);
}
#include <stdio.h>
int	main(void)
{
	char	s[] = "test";
	char	*s1;

	s1 = ft_strdup(s);
	printf("%s", s1);
}

