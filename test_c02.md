# Test C02

## ex00
```c
int main()
{
    char    dest[] = "Sera trocado";
    char    *src = "Test";

    printf("dest: %s\n", ft_strcpy(dest, src));
    return 0;
}
```
___

## ex01
```c
#include <stdio.h>

int     main(void)
{
        char    dest[] = "Testa";
        char    *src;
        unsigned        n;

        n = 2;
        src = "Pizza";

        printf("dest: %s\n", ft_strncpy(dest, src, n));
        return (0);
}
```
___

## ex02
```c
#include <stdio.h>

int     main(void)
{
        /* char str[] = "ABCDEJZ"; */
        char    str[] = "[a12;,.";
        /* char str[] = "AbcDfzZ"; */
        /* char str[] = ""; */
        int     test;

        test = ft_str_is_alpha(str);

        printf("Test return: %d\n", test);
        
        return (0);
}
```
___

## ex03
```c
#include <stdio.h>

int     main(void)
{
        /* char str[] = "12936473850"; */
        /* char    str[] = "[a12;,."; */
        /* char str[] = "AbcDfzZ"; */
        char str[] = "";
        int     test;
        
        test = ft_str_is_numeric(str);
        
        printf("Test return: %d\n", test);
        
        return (0);
}
```
___
## ex04
```c
#include <stdio.h>

int     main(void)
{
        char str[] = "1o936473850";
        /* char    str[] = "[a12;,."; */
        /* char str[] = "AbcDfzZ"; */
        /* char str[] = ""; */
        int     test;

        test = ft_str_is_numeric(str);

        printf("Test return: %d\n", test);

        return (0);
}
```
___
## ex05
```c
#include <stdio.h>

int     main(void)
{
        /* char str[] = "ABSCGEH/"; */
        char str[] = "";
        int     test;

        test = ft_str_is_uppercase(str);

        printf("Test return: %d\n", test);

        return (0);
}
```
___
## ex06
```c
#include <stdio.h>

int     main(void)
{
        /* char str[] = "Bendrf/&684"; */
        char str[] = "/[^\x20-\x7f]/";
        /* char str[] = ""; */
        int     test;

        test = ft_str_is_printable(str);

        printf("Test return: %d\n", test);

        return (0);
}
```
