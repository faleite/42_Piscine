/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:32:16 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 10:04:11 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lend;

	lend = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (size == 0)
		return (malloc(sizeof(char *)));
	len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, strs[0]);
	j = 1;
	while (j < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[j]);
		j++;
	}
	return (str);
}
/*
#include <stdio.h>
int     main(void)
{
        // o mesmo que: aloca 3 ptr para 3 str
        char **strings = malloc(sizeof(char *) * 3);

        strings[0] = malloc(sizeof(char) * 4);
        ft_strcpy(strings[0], "abc");

        strings[1] = malloc(sizeof(char) * 11);
        ft_strcpy(strings[1], "0123456789");

        strings[2] = malloc(sizeof(char) * 5);
        ft_strcpy(strings[2], "wxyz");

        char sep[] = " ";

        char *new_str = ft_strjoin(3, strings, sep);
        printf("%s\n", new_str);

        free(new_str);
        free(strings[0]);
        free(strings[1]);
        free(strings[2]);
        free(strings);
        return (0);
}
*/
