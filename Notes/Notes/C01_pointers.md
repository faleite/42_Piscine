## Ponteiros

- O **ponteiro** é um tipo de váriavel, que possibilita a criação de memória.
- A memória é dividida em duas partes:
    - **Stack** que é o topo da memória, armazenada de forma decrescente\
    (do maior pro menor).
    - **Heap** é a parte de baixo dos endereços, armazena de forma crescente\
    do menor pro maior.
- A memória é virtutal, e antes será mapeda em algo físico, como nas tiras\
da **RAM**, e seu **Hard Drive**.
- Os **ponteiros** serão a ferramenta que permite recuperar o endereço de uma\
variável para poder acessá-la e utilizá-la.
___

- Declaração e atribuição de um ponteiro.
    1. Declarar uma variável, é preciso saber o tipo da variável.
    2. Declarar um ponteiro (*), arterisco é o simbolo do ponteiro.
    3. Seguido do nome do ponteiro, ex.: *ptr

*Exemplo com código:*
```c
#include <stdio.h>

int main(void)
{
    int a;
    
    a = 24;

    // Declação do ponteiro
    int *ptr;
    
    // Declaração de ponteiro de um ponteiro
    int **ptr2;
    
    // nesta fase *ptr foi criado para apontar para algum endereço
    // ainda nao ha nada nele (nenhum endereco)
    printf("%p\n", ptr); // output: $ (nil)
    
    

    // Recuperar o endereço de "int a;"
    ptr = &a;  // &a leva ao endereço de "int a;"
    printf("%p\n", ptr); // output: $ 0x7ffdc92e8954
    
    // Recuperar o endereço de um ponteiro
    ptr2 = &ptr; // por "ptr" estar apontando para um endereco, 
    // ... ele passa a ter o seu proprio endereco
    printf("%p\n", ptr2); // output: $ 0x7ffdc92e8958
    
    // foi colocado o valor 42 no ponteiro do tipo inteiro
    *ptr = 42;
    
    // Mosta a que endereço o ponteiro esta apontando no momento
    printf("%p\n", ptr); // output: $ 0x7ffdc92e8954
    
    // imprime o valor de "a"
    printf("%i\n", a); // output: $ 42
    
    return (0);
}
```
___

### Desreferenciação de um ponteiro

- Desreferenciação de um ponteiro, é quando um ponteiro tem o endereço de uma\
variável, e vemos o que há nesse endereço. E poder modificar a variável que o\
ocupa. *Esse é o uso de ponteiros.*

*Exemplos:*

```c
#include <stdio.h>

int main(void)
{
    int     a;
    int     *ptr;

    a = 56;
    ptr = &a;
    /*  ptr no momento, é o endereço de a.
    *   *ptr no momento, exibe o valor que esta em seu endereço  */
    printf("%d\n", *ptr);
    /*  Modificar "int a" usando a desreferenciação
     *  Atribui a variavel "int a" o valor atribuido ao "*ptr" */
    *ptr = 78;
    printf("%d\n", a);
    return (0);
}
```

```c
#include <stdio.h>

int main(void)
{
    int     a;
    int     *ptr;
    int     **ptr2;
    int     ***ptr3;
    int     ****ptr4;
    int     *****ptr5;
    int     ******ptr6;

    a = 42;
    ptr = &a;
    ptr2 = &ptr;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;

    printf("%d\n", ******ptr6);  // Saida: 42
    return (0);
}
```
### Aritimética dos ponteiros

- Movimentação de endereço do ponteiro
```c
#include <stdio.h>

int main(void)
{
    int     a;
    int     *ptr;

    ptr = &a;
    /*  ptr no momento, é o endereço de a. */
    printf("%p\n", ptr);  // end: 0x7ff7bfcaa608
    /* "ptr + 1" altera o endereço em 4 pois ptr é um ponteiro para int
    *  Ocasiona em movimentação de inteiros */
    printf("%p\n", ptr + 1);  // end: 0x7ff7bfcaa60c
    return (0);
}
```

- Movimentação e alteração de valores de ponteiros

```c
#include <stdio.h>

int main(void)
{
    int     b;
    int     a;
    int     *ptr;

    b = 23;
    a = 12;
    ptr = &b;  // ptr aponta para o endereço de b (&b)
    printf("%p\n", ptr);  // end de ptr: 0x7ff7bfcaa608
    printf("%p\n", &b);  // end de b (&b): 0x7ff7bfcaa608
    printf("%p\n", ptr - 1);  // end de ptr - 1: 0x7ff7bfcaa604
    printf("%d\n", *(ptr - 1));  // o que há neste end: 12
    *(ptr - 1) = 78;  // atribui 78 a este endereço
    printf("%d\n", a);  // o que há em a: 78
    return (0);
}
```

- Tabelas
    - Tabelas e ponteiros estão intimamente ligados.
    - Ex.: int tab[3], o nome da tabela (tab) é um ponteiro para o tipo de elemento.

```c
#include <stdio.h>

int main(void)
{
    int tab[3];

    tab[0] = 134;
    tab[1] = 145;
    printf("%d\n", *(tab));  // é o endereço do 1º elemento da tabela
    printf("%d\n", *(tab + 1));  // é o endereço do 1º elemento da tabela + 1
    return (0);
}
```
- Tabelas são ponteiros presentes virtualmente, e uma ótima ferramenta para se\
descolcar nas tabelas.
- As chaves [] são um cáuculo aritimético de ponteiros e uma direção.

```c
#include <stdio.h>

int main(void)
{
    int tab[3];
    int *tab2[2];

    tab[2] = 145;
    tab2[1] = tab;
//  tab2[1][2] = 18;
//  *(tab2[1] + 2) = 18;
    *(*(tab2 + 1) + 2) = 18;
    printf("%d\n", *(tab + 2));
//  printf("%d\n", tab[2]); mesmo que printf acima
    return (0);
}
```
___

### String de caracteres

- É um grupo de bytes, terminado em um byte de valor 0.
- o valor 0, equivale ao caractere \0 na tabela ASCII.
- Uma string de caracteres é um conjunto de bytes seguidos que termina com 0.
- Em geral, acessamos uma string de caracteres via char*, pois é o endereço\
do primeiro caractere.
- E em seguida, avançamos até achar um caractere de valor 0 ('\0').
```c
#include <stdio.h>

int main(void)
{
    /* caractere */
    char c;

    c = '0';
    printf("%d\n", c); // valor int de c: 48

    c = 0;
    printf("%d\n", c); // valor int de c: 0 (equivale '/0')

    /* strings */
    char str[] = "lol"; // declarando uma string, que seja alteravel

    str[0] = 'p'; // altera o primeiro caracter da string
    // 1º dst do primeiro char (p), 2º toda a string (pol)
    printf("%c %s\n", *str, str);

    return (0);
}
```
___

### Utilização geral dos ponteiros

- Dois usos importantes do ponteiro:
    - Como usar:
        ```c
        #include <stdio.h>

        void fct(int *a) // aponta para o endereço de um int
        {
            *a = *a + 42; // salvo o valor do endereço de ('a' + 42) no endereço de 'a'
        }

        int main(void)
        {
            int a;

            a = 42;
            printf("%d\n", a); // retorna 42

            /* aqui não passo 'a' para a funçao mais sim uma copia de 'a'
             * fct(a); */

            fct(&a); // aqui pego o que ha no endereço de 'a'
            printf("%d\n", a); // retorna 84

            return (0);
        }
        ```
        - Podemos mudar, em uma função, uma variável que veio de outra função
    - O que é um ponteiro nulo:
        ```c
        #include <stdio.h>

        int main(void)
        {
            int *ptr;

            /* não se deve por um valor ha um ponteiro, pois é o mesmo que apontar para um
             * endereço na memória */
            // ptr = 42;

            /* Por conveção, se um ponteiro tem valor zero, ele é um ponteiro nulo
             * Isto é, entre aspas ele não aponta para nada.
             * Todos os ponteiros que estão em 0, ainda não tem local aonde ir.
             * Então posso usar 0, só o 0, para dizer que um ponteiro não esta
             * apontado para nada*/
            ptr = 0;

            return (0);
        }
        ```
___

### Ponteiros para void

- **void** é utilizada para dizer a uma função que não retorne nada ou que não\
pegue nenhum parametro.
- Uso do void para ponteiros:
```c
#include <stdio.h>

int main(void)
{
    void    *ptr;
    int     *ptr_i;
    char    *ptr_c;

    /* não posso colocar um endereço de um ponteiro int
     * em um ponteiro de char, por exemplo. */
    ptr_i = ptr_c;

    /* Mas eu tenho o ponteiro (void *ptr) que permite ser equivalente
     * a um ponteiro que é um endereço, ou seja posso re-especifar o
     * ponteiro (void *ptr) tranformando-o em quaquer tipo
     * Também serve para a sua fução utilize a memória sem saber o que é
     * exatamente
     * Permite também* que você gere memória como você quiser. */
    // possibidades de atribuição ao ponteiro void:
    ptr = ptr_c;
    ptr = &ptr;
    ptr = ptr_i;
    ptr_c = ptr;

    return (0);
}
```
___

### Ponteiros para funções

- Como declar um ponteiro para função:
```c
#include <stdio.h>

int fct(char c)
{
    printf("%c\n", c);
    return (0);
}

int main(void)
{
    /* preciso reescrever o protótipo da função
     * sem colocar um argumento */
    int (*ptr)(char);

    ptr = &fct; // recupera o endereço da função "fct()"
    (*ptr)('o');
    return (0);
}
```
