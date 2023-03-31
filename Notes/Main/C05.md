# C05

## ex00
```c
#include <stdio.h>
int     main(void)
{
        int     nb;

        nb = -3;
        printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
        return (0);
}
```
___

## ex01
```c
#include <stdio.h>
int     main(void)
{
        int     nb;

        nb = 5;
        printf("%d! = %d\n", nb, ft_recursive_factorial(nb));
        return (0);
}

```
___

## ex02
```c
#include <stdio.h>
int     main(void)
{
        printf("%d\n", ft_iterative_power(5, 2));
        return (0);
}
                                                  
```
___

## ex03
```c
#include <stdio.h>
int     main(void)
{
        int     power;

        power = 0;
        /* while (power < 10) */
        /* { */ 
                printf("%d\n", ft_recursive_power(0, power));
                /* power++; */
        /* } */
        return (0);

}
```
___

## ex04
```c
#include <stdio.h>
int     main(void)
{
        int     index;

        index = -1;
        printf("%d\n", ft_fibonacci(index));
        return (0);

}

```
___

## ex05
```c

#include <stdio.h>

int     main(void)
{
        int     nb;

        nb = 2147395600;

        printf("%d", ft_sqrt(nb));
        return (0);
}
```
___

## ex06
```c

#include <stdio.h>
int     main(void)
{
        int     nb;

        nb = 9;

        printf("%d", ft_is_prime(nb));
        return (0);
}
```
___

## ex07
```c
#include <stdio.h>
int     main(void)
{
        int     nb;

        nb = 7;

        printf("%d", ft_find_next_prime(nb));
        return (0);
}
```
___
