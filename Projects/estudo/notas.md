# Note

## Continue

## Refazer
- ulstr -> Ok
- first_word -> Ok
- rot_13
- searche_..repleace
- ft_putnbr
- fizzbuzz
- repeat_alpha
	- repetir letras conforme o seu indice no alfabeto
 	- formula para obter a quantidade a repetir cada letra:
		- letra - 'A'/'a' + 1
		- Ex. 'b' - 'a' + 1 [ 49 - 48 + 1 = 2 ]
		- Neste casa vemos que 'b' deve ser repetida 2x
- rev_print
	- Para reverter uma string pegamos o tamanho dela
	- e decrementamos este tamaho com --i; ou seja - - antes da variavel:
```c
i = 0;
while (av[1][i])
        i++;
while (i)
        write(1, &av[1][--i], 1);
```
- ft_atoi
	- transformar char em int: 
	```c
	/* formula: n * 10; n + char - '0' (48) */
	nb *= 10;
	nb += str[i] - 48;
	i++;
	```


## links
- [42Exam](https://github.com/jcluzet/42_EXAM)
- [Listas de exercicios](http://nigal.freeshell.org/42/exam-review.php)
