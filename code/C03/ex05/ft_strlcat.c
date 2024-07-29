/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:55:55 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/14 21:15:07 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && destlen + i < (size -1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	if (dest == 0)
		return (srclen + size);
	if (destlen > size)
		return (srclen + size);
	else
		return (destlen + srclen);
}
