# C07

## ex00
```c
#include <stdio.h>
int main()
{
    char *str1 = "Test";
    char *str2;
    str2 = ft_strdup(str1);

    printf("Duplicated string is : %s", str2);
    return 0;
}
```
___

## ex01
```c
#include <stdio.h>
int     main(void)
{
        int     min;
        int     max;
        int     *array;
        int     i;
        int     len;

        min = 0;
        max = 10;
        i = 0;
        len = max - min;

        array = ft_range(min, max);

        while (i < len)
        {
                printf("%d ", array[i]);
                i++;
        }
        return (0);
}
```
___

## ex02
```c
#include <stdio.h>
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
```
___

## ex03
```c
#include <stdio.h>
int     main(void)
{
        /* aloca 3 espacos dinamicos para 3 ponteiros de char
         * o mesmo que: aloca 3 ptr para 3 str */
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
```
___
