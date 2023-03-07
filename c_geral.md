# C

## Artigo

- Função [write( ):](http://codewiki.wikidot.com/c:system-calls:write)
___

- Um **byte** é um espaço com **8 bits**
- int 4 bytes (32 bits)
- Compilador clang, comando gcc que permite olhar ainda mais o código para\
encotrar erros com a flag:
    - gcc -Wall -Werror -Wextra
___

- Contador binário (base 2) 8 bits / 1 bytes:
    - Maior número (2^8) - 1 = 255
    - 255, maior número positivo quando é apenas positivo
    - 127, maior número positivo em 1 bytes
    - -128, menor número negativo em 1 bytes
    - Quando há positivos e negativos o útimo bit representa o sinal negativo (-)

----|128 |64  |32  |16  |8   |4   |2   |1
:--:|----|----|----|----|----|----|----|--
----|2^7 |2^6 |2^5 |2^4 |2^3 |2^2 |2^1 |2^0
12  |0   |0   |0   |0   |1   |1   |0   |0
255 |1   |1   |1   |1   |1   |1   |1   |1
-1  |1   |1   |1   |1   |1   |1   |1   |1
127 |0   |1   |1   |1   |1   |1   |1   |1
-128|1   |0   |0   |0   |0   |0   |0   |0
___

### Variáveis
- char (tamanho 1 byte (8 bites))
```c
#include <stdio.h>

int main()
{
    char c;

    // "%lu" inteiro decimal unsigned long
    printf("%lu\n", sizeof(c));
}
// Saída
// 1
```
- Compilar e executar arquivo:
```sh
gcc char.c && ./a.out
```

- Ler e escrever inteiros
Para ler ou escrever inteiros short, long ou unsigned devemos usar formatos específicos em\
scanf e printf.
    - Casos mais comuns:
        - **"%u"**
        inteiro decimal unsigned
        - **"%ld"**
        inteiro decimal long
        - **"%lu"**
        inteiro decimal unsigned long

- Tabela ascii no terminal:
    - ``$ man ascii``
    - veja em "The decimal set"

```c
#include <stdio.h>

int main()
{
    char c;

    // "k" na tabela decimal ascii equivale a "107"
    c = 'k';

    // "%lu" inteiro decimal unsigned long
    // "%d" imprime inteiro
    // "%c" imprime caractere
    printf("%lu %d %c\n", sizeof(c), c, c);
}
// saida: 1 107 k
```
___

- Tabelas estáticas
```c
#include <stdio.h>

int main()
{
    // ao invés de declaramos varias variáveis podemos usar uma tabela
    // aqui temos uma tabela de números inteiros de "0 a 9"
    int a[10];

    // para acessarmos as variáveis usamos os indices
    a[0] = 12;
    a[1] = 1234;
    a[9] = 15;
    a[3] = a[0];

    printf("%d\n", a[3]);
}
// Saída: 12
```
- Pdemos fazer tabelas de várias dimenssões
     - tabela de duas dimenssões:
```c
#include <stdio.h>

int main()
{
    // tabela com duas dimenssões, onde tenho 10 vezes 10 ints na memória contígua.
    // onde nos empresta 100 ints
    int a[10][10];
    int b;

    b = 3;
    // para acessarmos as variáveis usamos os indices
    // é possivel usar variáveis entre colchetes
    a[0][b] = 12;
    a[1][0] = 1234;
    a[9][7] = 15;
    a[3][6] = a[0][b];
    a[0][a[9][7]] = 12;

    printf("%d\n", a[3][6]);
}
// Saída: 12
```
___

- *Não se pode utilizar a mesma variavel mais de uma vez na mesma linha*
___

### Operadores Binários

*Exemplo base:*
```c
a = 11, b = 6
a = 00001011 (valor binário: 8-bit)
b = 00000110 (8-bit)
``````
*Os três principais são: **&**, **|** e **^**.*

1. Operador **&** (*and*)
    - Olha os bits um por um e os compara.
    - Se **os dois** bits estão em 1, então o bit final será 1.
    - caso contrário o bit final será 0.
```c
00001011
00000110
&
00000010
```

2. Operador **|** (*or*)
    - Olha os bits um por um e os compara.
    - Se **ao menos** um dos dois bits estão em 1, então o bit final será 1.
    - caso contrário o bit final será 0.
```c
00001011
00000110
&
00001111
```

3. Operador **^** (*xor*)
    - Olha os bits um por um e os compara.
    - Se **apenas** um dos dois bits estiver em 1, então o bit final será 1.
    - caso contrário o bit final será 0.
```c
00001011
00000110
&
00001101
```
___

4. Operador **~** (*complemento*)
    - *Operador **unário** que atua diretamente **em uma** variável binária.*
    - Ele inverte o conjunto de bits.
    - Se o bit for 0, ele retorna 1.
    - Se o bit for 1, ele retorna 0.
    - É o operador de negação, permite inverter o conjunto de valores.

```c
00001011
~
11110100
```

5. Operador de descolacamento de bits **<<** (*Left Shift*)
    - *Operador **unário** que atua diretamente **em uma** variável binária.*
    - Ele desloca os bits para a esquerda.

```c
00001011
<<
00010110
```

```c
00001011
<< 2  // Deslocamento de 2 bits a esquerda
00101100
```

```c
00001011
<< 8  // Deslocamento de 8 bits a esquerda
00000000
```

6. Operador de descolacamento de bits **>>** (*Right Shift*)
    - *Operador **unário** que atua diretamente **em uma** variável binária.*
    - Ele desloca os bits para a direita.

```c
00001011
>> 1  // Deslocamento de 1 bit a direita
00000101
```

```c
00001011
>> 3  // Deslocamento de 3 bits a direita
00000001
```

```c
00001011
>> 4  // Deslocamento de 4 bits a direita
00000000
```

*Exemplo particular:*
```c
10000000  // Valor negativo: -128
>> 1  // Deslocamento de 1 bit a direita
11000000  // Quando o valor binário for negativo, sera usado o mesmo valor anterior
// neste caso desloca usando o 1 por ser o 1 que estava na extrema equerda.
```

>*Desaconselhavel trablahar com operadores binários no float, se não souber\
exatamente o que esteja fazendo, pois no float 1 e 0 não valem exatamente o\
mesmo que no int*
___

### Condicional switch
- O **switch** é o que nos permite substituir uma cadeia de **if**, **elseif** e **else**.
- É uma série com várias condições com o objetivo de executar instruções.
- Trabalha com apenas uma variável, e um parâmetro.
- No lugar do if, elseif usa-se **case**
- No lugar do else usa-se **default**
- Se uma condição **case** for verdadeira, retorna todos os outros cases subsequêntes
- Para mudar este comportamento utilizamos o **break**

*Código exemplo:*
```c
#include <stdio.h>

int	main(void)
{
    int a;
    a = 42;

    // Switch
    switch (a)
    {
        case 41:  // se 'a' for igual a 41, faça:
            printf("Hello\n");
            break; // se este case for verdadeiro, faça e saia do programa
        case 42:
            printf("Word\n");
            // se este case for verdadeiro, faça e execute todos os cases subsequentes
        case 43:
            printf("This is\n");
            break;
        default:  // não importa a ordem do default, se comportara da mesma forma
            printf("Awesome\n");
    }


    // Usando o if, elseif e else
    if (a == 41)
        printf("Hello\n");
    else if (a == 42)
        printf("Word\n");
    else if (a == 43)
        printf("This is\n");
    else
        printf("Awesome\n");
}
```
___

### Condicional Ternario

- Permite fazer o uso do if e else, em apenas uma linha
- O operador espera uma condição com uma interrogação no final
    - Ex.: **a == 42 ?**
- Se true, retorna a opção apos a interrogação
    - Ex.: a == 42 ? **12**
- Se false retorna o else, que é a opção após dois pontos
    - Ex.: a == 42 ? 12 : **13**
- O ternário não é um condicional puro, mas sim um operador. Ou seja,\
ele dara um valor de retorno. Retorna o valor desta forma:
    - Ex.: **b =** a == 42 ? 12 : 13 ;
```c
#include <stdio.h>

int	main(void)
{
    int a;
    int b;

    a = 42;

    // Uso do operador ternário
    b = a == 42 ? 12 : 13 ;

    // Mesmo com if else
    if (a == 42)
        b = 12;
    else
        b = 13;

    printf("%d\n", b);
}
```
- Operador ternário me permite retornar uma variável:
```c
int	main(void)
{
    int a;

    a = 41;

    // Operador ternário me permite retornar uma variável:
    printf("%d\n", a == 42 ? 12 : 13);
}
```
___

### While

- O limite do while é refeito na medida em que a condição é != 0.
    - Enquanto o que esta entre parênteses for !=0
    - Efetue o que esta nas chaves abaixo

*Exemplo com código:*

```c
#include <stdio.h>

int main(void)
{
    int tab[10];
    int i;

    /* Atribui valores em cada index na array tab[10] */
    i = 0;
    while (i < 10)
    {
        // atribui sequência de 0 a 9
        tab[i] = i;

        // atribui sequência exponecial i * i
        tab[i] = i * i;

        i++;
    }

    /* Imprime os valores de cada index da array tab[0] */
    i = 0;
    while (i < 10)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}
```
*Mesmo esquema com o loop **for**:*

```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
}
```
___

### do while

- É quase a mesma coisa que o laço **while**, porém iremos regressar pelo menos\
uma vez no escopo
- Com o **do while** executamos pelo menos uma vez o que temos no escopo, e\
depois faremos a condição while.
```c
#include <stdio.h>

int main()
{
    int i;

    i = 10;
    /* Com "do" passa uma vez no escopo
     * imprime a variavel e vai para o loop while */
    do
    {
        printf("%d\n", i);
        i++; // i passa a valer 11
    }
    while (i < 10); // checa a condição antes de ir para o escopo
}
```
___

### break e continue

- **break** e **continue**, são duas palavras-chave de controle de loop.
- Já vimos **break** com o **switch**: *me deixa sair do switch assim que o encontro*.
```c
#include <stdio.h>

int main()
{
    int i;
    int j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            printf("%d %d\n", i, j);
            /* Para o laço j, imprime j sempre com seu valor inicial
             * Imprimi i interando no laço i */
            break;
            j++;
        }
        i++;
    }
    printf("I am out\n");
}

```
- **continue** possibilita voltar até a condicional, reiniciar outro loop imediatamente.
- Ele vai levar ao topo do loop, e reiniciar o próximo loop.

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        /* no laço for, ele retornara ao topo do laço
         * imprimindo e incrementando a variavel i
         * e não executara nada no escopo que estiver
         * além do "continue"  */
        continue;
        printf("NEVER EVER\n");
    }
    printf("I am out\n");
}
```

```c
#include <stdio.h>

int main()
{
    int i;

    i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        /* no laço while, ele retornara ao topo do laço
         * infinitamente imprimindo 0 da variavel i
         * e não executara */
        continue;
        i++;
    }
    printf("I am out\n");
}
```
___

### labels e goto

- O **goto** é o ancestral do *loop while* e deve ser usado com parcimônia,\
ele é superperigoso como ferramenta.

*Exemplo com código:*
```c
#include <stdio.h>

int main()
{
    int i;

    i = 0;
bla: // label
    printf("%d\n", i);
    i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
        goto bla;  // va para o label "bla" e continue a partir do bla
    }
    printf("I am out\n");
}
```
___

### Funções

- Criar uma função:
    - 1. Declarar o *tipo de valor de retorno*
    - 2. Nomear a função + fecha e abre parênteses
    - 3. Declarar os argumentos da função
```c
/* "void" é um tipo de valor de retorno que significa "nada"
* fct é o nome da função
* void argumento da função
* {} escopo da função*/
void fct(void)
{
    printf("Hello\n");
}
```
- Protótipo
    - Serve para fazer o programa entender que nossa função existe
    - Um programa **C** se lê de maneira linear
    - Um protótipo permite definir a função no início do programa
    - Desta forma a função principal (main) pode permanecer acima da funções\
    que seram criadas.
```c
/* Protótipo da função */
void fct(void);
```

- **return**
    - Valor de retorno de uma função
    - Palavra chave **return**, nos permite retornar um valor em um retorno\
    de função.

- **Argumentos de função**
    - São valores de entrada que poderemos usar no interior da função
___

### Recursão
*Exemplo com código:*
```c
#include <stdio.h>

int mult(int a, int b)
{
    return (a * b);
}


int mult_loop(int a, int b)
{
    int ret;

    ret = 0;
    while (b != 0)
    {
        if (b < 0)
        {
            ret -= a;
            b++;
        }
        else
        {
            ret += a;
            b--;
        }
    }
    return (ret);
}

/* Recursão */
int mult_rec(int a, int b)
{
    if (b == 0)
        return 0;
    if (b < 0)
        return -a + mult_rec(a, b + 1);
    return a + mult_rec(a, b - 1);
}

int main(void)
{
    printf("Multiplicação com operador *\n");
    printf("%d\n", mult(4, 3));
    printf("\n");

    printf("Multiplicação com loop\n");
    printf("%d\n", mult_loop(4, 3));
    printf("\n");

    printf("Multiplicação com recursão\n");
    printf("%d\n", mult_rec(4, 3));

    return (0);
}

```
___

## Ponteiros
___

### Ponteiros

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
___

### Malloc (heap, malloc e free)

- **heap** é a parte da memória baixa, siginifica "monte"
    - ao contrario da stack, pode ser controlada.
    - (a stack se alarga e diminui, conforme chamamos uma funçao ou\
    declaramos variáveis)
    - no **heap**, é preciso usar funções para pedir memória diretamente.
```c
#include <stdio.h>
#include <stdlib.h> // usado neste caso para free e malloc

int *get()  // Esta funçao remete a um endereço que esta na stack
{
    int *tab;

    /* malloc reserva espaço na memória
     * A função sizeof() pega o tamanho da variavel passada como parametro
     * indepemdente do tipo
     * Neste caso esta reservando espaço equivalente a 1 int * 9 */
    tab = malloc(sizeof(*tab) * 9);

    return (tab);
}

int main(void)
{
    int *ptr;

    ptr = get();
    *ptr = 12;
    printf("%d\n", *ptr);

    free(ptr); // função free() libera espaço da memória que foi reservado em malloc

    return (0);
}
```
___

### main - Argumentos do Main

#### Valor de retorno
- Pode verificar o valor de retorno do programa no shell após compilção:
    -  Com o seguinte comando: `echo $?`
- Por convenção é importante retornar zero no fim do seu main, para dizer no\
fim do programa, tudo abaixo está certo.

#### Argumentos
- Temos três:
    - 1. **int argc**: indica o número de parametros que daremos ao programna
        - *Importante:* O nome do programa conta como parametro
        - Se não dou nenhum parametro, argc retorna 1
    - 2. **char \*\*argv**: é um ponteiro de endereço de um pool no início de\
    cada parâmetro que daremos em parâmetro, cada string mostra que estara\
    no início do endereço, o que nos permite acessa-lo.
    - 3. **char \*\*environ**: Nos permite acessar o conteúdo do nosso ambiente\
    do shell
        - Esta funão não é muito utilizada.
        - Acessar o ambiente de desenvolvimento do Shell: `env`
```c
#include <stdio.h>

/* 1. int: representa o valor de retorno
 *    por padrão retorna '0', que representa que o programa
 *    executou até o fim sem problemas.
 * main: representado como função principal
 * void: em argumentos do main, representa vazio (sem argumentos) */
int main(void)
{
    return (0);
}

/* Os três argumentos do main: */
int main(int argc, char **argv, char **environ)
{
    return (0);
}

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    printf("Numero de argumentos: %d\n", argc);
    printf("Valor do argumento: %s\n", argv[0]); // mostra o primeiro argumento

    /* Podemos armazenar estes argumentos em variaveis
     * para poder tratar no código por exemplo */
    char *str = argv[1];
    printf("%s\n", str);

    return (0);
}
```
___

## Pre-processador

### Compilação
- Compilador **GCC**
    - **gcc** tem 3 frases de compilação diferentes.
        - **Pré-processamento** processa o *include*
            - o comando **cpp** faz o pré-processamento
        - **Compilação** cada arquivo é compilado por outro.
            - **gcc -c** cria um arquivo .o que é um arquivo de objeto, neste caso\
            dos arquivos .c, só o main sera compilado.
        - Arquivos .o serão linkados

### #include
- #include é um comando de pré-processamento, e vai acontecer antes da compilação\
e antes da vinculação também, que vem depois da compilação.
- o #include, enclui o arquivo na compilação que esta entre < >
    - Entre aspas " " ele vai procurar nas diretivas do compilador
    - Entre < > ele vai buscar na pasta atual, ou em uma das pastas fornecidas\
    usando -e para incluir
- include permite incluir um arquivo em qualquewr parte do código
___

### #define
- #define é um comando de pré-processador, ele sera executado antes da compilação
- serve para definir, entre aspas, uma variável e substituí-la.
- Nos permite definir o macro, que fará uma subtuição por texto.
```c
#include <stdio.h>

// Substituição de variável (deve ser em uppercase)

// #define LOL "lol\n"
#define LOL "lol\n");
#define POUIC LOL

int main(void)
{
    printf(POUIC

    // printf(LOL);

    // printf("lol\n");

    return (0);
}
```
___

### #define com variáveis
```c
#include <stdio.h>

#define LOL(x, y) "lol %d %d\n", x, y

int main(void)
{
    int youpi;

    youpi = 42;
    printf(LOL(youpi, 87));

    return (0);
}
```
___

### Comandos de controle do pré-processador
#### #if, #else, #elif e #endif
```c
#include <stdio.h>

int main(void)
{
// #if defined(POUIC) // define é um tipo de loop
#if POUIC < 10 // a variavel POUIC e seu valor foi definida na linha de comando
    printf("youpi matin\n");
#elif POUIC < 20
    printf("YOYO\n");
#else
    printf("NO OTHER\n");
#endif
    return (0);
}
```

```sh
<!-- linha de comando -->
$ gcc -Wall -Wextra -Werror -DPOUIC=1 tmp.c && ./a.out  //variavel POUIC com a flag -D
youpi matin
$ gcc -Wall -Wextra -Werror -DPOUIC=11 tmp.c && ./a.out
YOYO
$ gcc -Wall -Wextra -Werror -DPOUIC=311 tmp.c && ./a.out
NO OTHER
```
___

### #ifdef e #ifndef
- #ifdef é o if defined, nos mostra se já foi definido
```c
#include <stdio.h>

#define POUIC

int main(void)
{
/* se eu passar POUIC com a flag -D (-DPOUIC) na linha de comando
 * ou incluir #define POUIC no cabeçario
 * o printf("youpi matin\n") é executado
 * se não o #else é executado */
#ifdef POUIC // mesmo que: #if defined(POUIC)
    printf("youpi matin\n");
#else
    printf("NO OTHER\n");
#endif
    return (0);
}
```
- #ifndef se ainda não foi definido
```c
#include <stdio.h>

#define POUIC

int main(void)
{
/* Inverso do #ifdef
 * se eu passar POUIC com a flag -D (-DPOUIC) na linha de comando
 * ou incluir #define POUIC no cabeçario
 * o #else é executado */
#ifndef POUIC // contrário do #ifdef
    printf("youpi matin\n");
#else
    printf("NO OTHER\n");
#endif
    return (0);
}
```
- Também pode ser usado para proteger um arquivo .h
    - Ou seja não deixara voce incluir o mesmo arquivo\
    .h no cabeçário mais de uma vez
- Exemplo com código:
```c
#ifndef __FCT_H__
# define __FCT_H__

int gl_pouet = 12;

#endif
```
___

## Data Structures

### typedef
- Permite definir seus próprios tipos de variáveis.
    - Redefinir um outro tipo.

```c
#include <stdio.h>

// definindo um tipo de ponteiro int
typedef int * int_p;

int main(void)
{
    // int *a, b, c; // neste caso apenas 'a' é um ponteiro.
    int_p   a, b, c; // neste caso todas as variaveis são um ponteiro de int.
    int     z;

    b = a;
    b = &z;
    return (0);
}

// criando um tipo de variavel
typedef double my_variable;
// é possivel fazer combinações de typedef
typedef my_variable * my_variable_p;
```
___

### Struct
- Cria um novo tipo de variável associando vários tipos de variável, no\
interior de uma estrutura.
```c
#include <stdio.h>

// definindo um tipo de struct com o typedef
typedef struct s_point
{
    int x;
    int y;
} t_point; // nomeando o struct

int main(void)
{
    t_point tab[3];
    /* mesmo que:
    * struct s_point tab[3]; */

    // Mesmo resultado com escritas diferentes
    tab->x = 1;
    (*tab).x = 1;
    tab[0].x = 1;

    tab[0].y = 2;
    tab[1].x = 3;
    tab[1].y = 4;

    tab[2] = tab[0];
    printf("%d %d\n", tab[0].x, tab[0].y);  // saída: 1 2

    return (0);
}
```
___

- Espécie de tamanho:
    - Na memória tudo tem tamanho.
    - **sizeof** é uma palavra-chave que nos permite recuperar o tamanho de algo.
```c
#include <stdio.h>

// definindo um tipo de struct com o typedef
typedef struct s_point
{
    int     x; // sizeof 4
    int     y; // sizeof 4
    char    *name; // sizeof 8
} t_point; // nomeando o struct

int main(void)
{
    t_point tab[3];
    int i;

    /* Verificando os tamanhos de struct e int
     * lu: unsigned long
     * sizeof(i): 4
     * sizeof(tab[0]): 16*/
    printf("%lu %lu\n", sizeof(i), sizeof(tab[0]));

    return (0);
}
```
___

### enum
- Serve para redefinir um novo tipo de variaveis, mais acima de tudo\
definir constatntes.

```c
#include <stdio.h>

/* definindo uma constatnte com 'enum'
 * enum é uma constante inteira, não podemos por numeros float */
enum e_list
{
    /* Sequência numérica
     * se em val1 nada for declarado, val1 = 0, fim = 4
     * Essas variavies criadas serão globais */
  //val1,
    val1 = 12,  // Val1 = 5
    val2, // 13 // 6
    val3, // 14 // val3 = 5
    val4, // 15 // 6
    fim   // 16 // 7
};

int main(void)
{
    printf("%d\n", fim);

    return (0);
}
```
___

### Union
- struct e union se usam com a mesma gramática, embora não tenham os\
mesmos efeitos.
```c
#include <stdio.h>

// definindo um tipo de struct com o typedef
typedef union u_point
{
    /* a valor de union sera o valor da variavel de maior valor
    * esse valor sera administrado de acordo com o uso da variaveis */
    int     i;
    char    c[4];
    float   f;
}   t_pouet; // nomeando o union

int main(void)
{
    t_pouet p;

    printf("%lu\n", sizeof(p));

    return (0);
}
```
___

### const
- **const** é uma palavra-chave que serve para proteger uma variável
    - Só é possivel declarar valor a variável com const, uma unica vêz
```c
// Exemplo:
const int i = 9
```
___

### static
- **static** é uma palavra-chave que se aplica tanto em funções\
quanto em variáveis-
- Permite restringir o escopo de acessibilidade dessas funções e variáveis.
- Se eu passar o static a minha função, ela fica restrita apenas ao arquivo a
que ela se origina. Esta função fica inacessível a qualquer outro arquivo, não
podendo ser linkada.
- Em uma variável **static** permite restringir o escopo de acessibilidade
    - Declarar uma variavel com **static** evita erros de duplicidade
- **stack** *será útilizado somente com uma variável ou uma função global.*
```c
// Exemplo:
static void fct(void) // utilizando em uma função
{
    static int a = 0; // utilizando em uma variável

    return (0);
}
```
___

### Listas de canais
- Lista de canais é uma estrutura de dados que não é exatamente própria de C.
- Parcecida com uma tabela, exceto que tem vantagens e inconvenientes em\
relação a uma tabela.
- Para criar uma lista de canais, precisamos de uma **struct**
- A lista de canais é composta de dados e um ponteiro para o próximo struct s_list. (elo)
- Ao contrário de uma tabela, eles não são contínuos na memória.
- A vantagem da lista de canais é que podemos utilizá-la quando temos a\
necessidade constatante de adicionar elementos.
- Por outro lado, se queremos apenas acessar os elementos de maneira aleatória,\
a lista de canais não é prática.
```c
#include <stdio.h>

struct s_list
{
    int     i;
    char    c;

    /* isso é o que faz ser uma lista de canais
     * *next é um ponteiro para struct s_list, que nos permite passar
     * para o proximo elemento */
    struct  s_list  *next;
};

void    aff_list(struct s_list *begin);

int main(void)
{
    struct s_list elem1;
    struct s_list elem2;
    struct s_list elem3;
    struct s_list *begin;

    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    elem3.next = 0;

    elem1.i = 98;
    elem2.i = 109;
    elem3.i = 42;

    /* imrpimir tudo
     * printf("%d\n", begin->i);
     * printf("%d\n", begin->next->i);
     * printf("%d\n", begin->next->next->i); */

    /* todas as formas imprime elem3.i
     * printf("%d\n", begin->next->next->i);
     * printf("%d\n", elem1.next->next->i);
     * printf("%d\n", elem2.next->i);
     * printf("%d\n", elem3.i); */

    // chama a função que imprime toda lista de int em struct s_list
    aff_list(begin);

    return (0);
}

void    aff_list(struct s_list *begin)
{
    while (begin) // Enquanto begin for diferente de 0.
    {
        printf("%d\n", begin->i);
        begin = begin->next;
    }
}
```
___

### Árvores
- A **árvore** é um tipo de diagrama, que é uma forma de estruturar dados
- De um único ponto de partida/entrada, podemos percorrer todo o conjunto\
de dados.
- Uma árvore binária é uma estrutura com dois ponteiros de tipos similares\
que permite criar estruturas inteligentes, que permitirão ter mais eficácia,\
mais performance na pesquisa dos dado
s e para inserir novos dados na sua\
estrutura.
```c
// Estrutura da árvore binária:
typedef struct s_binary_tree
{
    int a;
    struct s_binary_tree    *left;
    struct s_binary_tree    *right;
}   t_binary_tree;

int main(void)
{
    return (0);
}
```
___

### Bíbliotecas
- É um lugar onde você pode reunir todas as funções que você usar regularmente\
sem ter que trabalhar sempre com arquivos.
- Também pode servir, por exemplo, para transmitir um código para alguém,\
sem dar o seu código fonte.
- Exemplo de criação da biblioteca:
    - Adicionando duas funções:
        - display_str.c
        - display_char.c
```c
void    display_str(char *str);

int main(void)
{
    display_str("Hello Wolrd!\n");
    return (0);
}
```
```bash
# Compilar funções para .o
$ gcc -c display_str.c
$ gcc -c display_char.c

# Criar biblioteca (nome deve sempre começar com lib)
$ ar rc libstr.a display_char.o display_str.o

# compilando um programa utilizando a biblioteca
$ gcc -Wall -Werror -Wextra main.c -L. -lstr

# uso
$ ./a.out
```
```bash
# criar um súmario da sua biblioteca para o gcc acessar as funções de forma agil
$ ranlib libstr.a
```

*Step -->* **C - XII - 1**

