# Fuction main para o C01

## ex00
```c
#include <stdio.h>

int main(void)
{
	int	a;

	a = 0;

	/* pegue o valor de ponteiro *nbr e coloque em a */
	ft_ft(&a);

	printf("o que esta no endereco de 'a' e: %d\n", a);

	return (0);
}
```
___

## ex01
```c
#include <stdio.h>

int	main()
{
	int	a;
	int	*ptr;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	a = 7;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);

	printf(" %d\n", a);

	return (0);
}
```
___

## ex02
```c
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 12;
	ft_swap(&a, &b);

	printf("Valor a: %d\nValor b: %d", a, b);
	return (0);
}
```
___

## ex03
```c
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 0;
	/* a = 12; */
	/* b = 10; */

	ft_ultimate_div_mod(&a, &b);
	
	printf("Result Div: %d\nResult Mod: %d\n", a, b);

	return (0);
}
```
___

## ex04
```c
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	/*a = 10;*/
	/*b = 0;*/
	a = 12;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	
	if (a == 10 && b == 0)
	{
		printf("Not divide y zero");
	}
	else
	{
		printf("Result Div: %d\nResult Mod: %d\n", a, b);
	}
	return (0);
}

```
___

## ex05
```c
int	main(void)
{
	char	*str;

	str = "Hello";

	ft_putstr(str);
	ft_putchar('\n');

	return (0);
}
```
___

## ex06
```c
int main(void)
{
	char	*str;
	int	strlen;

	str = "Hello";

	strlen = ft_strlen(str);

	printf("strlen: %d\n", strlen); 

	return (0);
}
```
___

## ex07
```c
#include <stdio.h>

int	main(void)
{
	int 	tab[6] = {1, 2, 3, 4, 5, 6};

	ft_dev_int_tab(tab, 6);
	
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}

```
___

## ex08
```c
#include <stdio.h>

int	main(void)
{
	int	tab[5] = {2, 1, 3, 5, 4};

	ft_sort_int_tab(tab, 5);

	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
```
___
