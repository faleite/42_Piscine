```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:02:30 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/10 13:05:50 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if (argc > 1)
    {
        while (*argv[argc -1])
        {
                write(1, argv[argc - 1]++, 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:54:10 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/16 19:26:54 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* void	ft(int *a, int *b) */
/* { */
/* } */

/* int	main(void) */
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'y')
				av[1][i] += 1;
			if (av[1][i] >= 'A' && av[1][i] <= 'Y')
				av[1][i] += 1;
			if (av[1][i] == 'z' || av[1][i] == 'Z')
				av[1][i] -= 25;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	/* printf("%d, %d", a, b); */
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:37:42 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/15 20:02:48 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			/* se av >= A e Z >= av
			* se av >= a e z >= av */
		}
	}
	return (0);
}
/* ESCOPO DE LOOP ANINHADO */ 

int	main(void)
{
	while (a)
	{
		while (b = oi)
		{
			printf("isso")
			b++:
			
			while (c)
			{
				teste
				c++;
			}
			b++;
		}
		a++:
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repalce.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:25:40 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/15 18:28:08 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 4)
	{
		while (av[1][i])
		{
			// Make code
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:01:45 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/16 10:44:33 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] && av[1][i] >= 9 && av[1][i] <= 13 || av[1][i] == 32)
			i++;
		while (av[1][i] && !(av[1][i] >= 9 && av[1][i] <= 13 || av[1][i] == 32))
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:37:42 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/15 20:39:21 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while(av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'm')
				|| (av[1][i] >= 'A' && av[1][i] <= 'M'))
				av[1][i] += 13;
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z')
				|| (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				av[1][i] -= 13;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	return (0);
}
```
___

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:15:18 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 13:48:02 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if ((av[1][i] >= 9 && av[1][i] <= 13) || (av[1][i] == 32))
				i++;
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') ||
				(av[1][i] >= 'A' && av[1][i] <= 'Z') ||
				(av[1][i] >= '0' && av[1][i] <= '9'))
				write(1, &av[1][i], 1);
			if ((av[1][i] >= 9 && av[1][i] <= 13) || (av[1][i] == 32))
				break ;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:33:27 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 16:56:05 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}


int	main(void)
{
	int	n;

	n = 1;
	while (n < 101)
	{
		if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(n);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:45:35 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 21:53:57 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	if (ac == 2)
	{
		i = 0;
		repeat = 1;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat = av[1][i] - 'a' + 1;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat = av[1][i] - 'A' + 1;
			else
				write(1, &av[1][i], 1);
			while (repeat)
			{
				write(1, &av[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:54:00 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/22 13:11:23 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```
___

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:28:29 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/23 19:27:34 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	mn;
	int	nb;

	i = 0;
	mn = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mn++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (!(mn % 2))
		return (nb);
	return(-nb);
}

#include <stdio.h>
/*int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                printf("%d", ft_atoi(argv[1]));
        }
        return (0);
}
*/
int	main(void)
{
	char *str;
	str = "   ---+--+1234ab56473 ";

	ft_atoi(str);

	printf("%d", ft_atoi(str));
	return (0);
}
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:05:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/23 15:58:43 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* int	ft_strlen(char *str) */
/* { */
	/* int	i; */

	/* i = 0; */
	/* while (str[i]) */
		/* i++; */
	/* return (i); */
/* } */

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{

		i = 0;
		while (av[1][i])
			i++;
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
```
