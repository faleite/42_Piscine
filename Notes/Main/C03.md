# C03

## ex00
```c
#include <stdio.h>
int     main(void)
{
        char    s1[] = "hoje";
        char    s2[] = "test";
        int     value;
        
        value = ft_strcmp(s1, s2);

        printf("%d\n", value);
}

```
___

## ex01
```c
#include <stdio.h>
int     main(void)
{
        char    s1[] = "iest";
        char    s2[] = "test";
        unsigned int    n = 1;
        int     ft;

        ft = ft_strncmp(s1, s2, n);
        printf("Value: %d\n", ft);
        return (0);
}

```
___

## ex02
```c
#include <stdio.h>
int     main(void)
{
        char    dest[] = "test";
        char    src[] = "ing";
        char    *ft;

        ft = ft_strcat(dest, src);

        printf("Return: %s\n", ft);
        return (0);
}
```
___

## ex03
```c

#include <stdio.h>

int     main(void)
{
        char    dest[] = "test";
        char    src[] = "inglorious";
        unsigned int    nb = 3;
        char    *ft;

        ft = ft_strncat(dest, src, nb);
        printf("Return: %s\n", ft);
        return (0);
}

```
___

## ex04
```c

#include <stdio.h>
int     main(void)
{
        char    str[] = "Say hello for a new world";
        char    *ptr;

        ptr = ft_strstr(str, "new");
        printf("%s\n", ptr);
        return (0);
}
```
___

## ex05
```c
#include <stdio.h>
int     main(void)
{
        char    dest[] = "Hello";
        char    src[] = ", world";
        unsigned int    ft;
        unsigned int    size = 13;

        ft = ft_strlcat(dest, src, size);
        printf("Resultado: %s (comprimento %d)", dest, ft);
        return (0);
}
```
