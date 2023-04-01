# C03

## Resumo
- strcmp
 - compara duas strings.
 - 0: igual, -1 s1 menor q s2, 1 s1 maior q s2
- strncmp
 - memsmo strcmp, mas comapra n primeiros numeros
- strcat
 - acrescenta string origem a string de destino, sobrepoe char nulo
- strncat
 - mesmo que strncat, mas acrescenta n bytes de origem ao destino
- strstr
 - verifica se ha substring em destino igual a string de origem, aponta a esta substring 
- strlcat concatena duas strings de forma segura

## strcmp
- A função strcmp() em C é usada para comparar duas strings. A função retorna um valor inteiro que indica se as duas strings são iguais ou diferentes.
 - 0, se s1 e s2 forem iguais;
 - um valor negativo se s1 for menor que s2 .
 - um valor positivo se s1 for maior que s2 .

## strncmp
- A função strncmp () é semelhante, exceto que compara apenas os primeiros (no máximo) n bytes de s1 e s2 .

### VALOR DE RETORNO
- As funções strcmp () e strncmp () retornam um número inteiro menor que, igual ou maior que zero se s1 (ou os primeiros n bytes dele) forem encontrados, respectivamente, como menor, correspondente ou maior que s2.

## unsigned int (or shot, long e char)
- "unsigned" é um modificador que pode ser usado com tipos numéricos, como "int", "short", "long" e "char", entre outros.
- Quando um tipo numérico é declarado como "unsigned", isso significa que ele só pode representar valores positivos ou nulos, ou seja, não pode armazenar números negativos. Isso permite que o tipo armazene números maiores do que seu equivalente "signed" (com sinal), uma vez que não precisa reservar um bit para armazenar o sinal.
- Por exemplo, um "unsigned int" pode armazenar números inteiros positivos entre 0 e 4.294.967.295, enquanto um "int" normal só pode armazenar números entre -2.147.483.648 e 2.147.483.647.
- É importante ressaltar que, embora o uso de "unsigned" possa aumentar a faixa de valores que podem ser armazenados em um tipo numérico, também pode causar problemas se houver operações aritméticas envolvendo valores negativos ou mistura de tipos "unsigned" e "signed".

### unsigned char
- O uso de "unsigned" em "char" depende do contexto e do objetivo do programador.
- Normalmente, "unsigned char" é usado quando se deseja representar valores de 0 a 255, sem permitir valores negativos. Esse tipo de dado é comumente usado para armazenar dados binários, como bytes de uma imagem ou dados de áudio, ou para manipular bits individuais.
- Por outro lado, "char" (sem o modificador "unsigned") é usado para representar caracteres ASCII, que vão de -128 a 127. Nesse caso, a presença do sinal é importante, pois permite que caracteres negativos (como acentos, por exemplo) sejam representados.
- É importante lembrar que o tipo "char" pode ter uma implementação diferente em diferentes plataformas ou compiladores. Por isso, é importante verificar as características do tipo "char" em cada ambiente antes de decidir usar "unsigned char" ou "char".

## strcat / strncat
- A função strcat () acrescenta a string src à string dest , substituindo o byte nulo de terminação ('\0') no final de dest e, em seguida, adiciona um byte nulo de terminação. As strings não podem se sobrepor e a string de destino deve ter espaço suficiente para o resultado. Se dest não for grande o suficiente, o comportamento do programa será imprevisível; saturações de buffer são um meio favorito para atacar programas seguros .
- A função strncat () é semelhante, exceto que usará no máximo n bytes de src ; e
src não precisa ter terminação nula se contiver n ou mais bytes.
- Assim como strcat (), a string resultante em dest é sempre terminada em nulo.
- Se src contiver n ou mais bytes, strncat () grava n+1 bytes em dest ( n de src mais o byte nulo de terminação). Portanto, o tamanho de dest deve ser pelo menos strlen(dest)+n+1 .

## strstr
- A função strstr é uma função da biblioteca padrão da linguagem C, que é usada para encontrar a primeira ocorrência de uma sequência de caracteres em outra sequência de caracteres.
- A função recebe duas strings como argumentos: str1 e str2. Ela procura a primeira ocorrência da string str2 dentro da string str1. Se a string str2 for encontrada em str1, a função retorna um ponteiro para o início da primeira ocorrência de str2 em str1. Caso contrário, a função retorna um ponteiro nulo (NULL).
- Por exemplo, o seguinte código usa a função strstr para encontrar a primeira ocorrência da string "world" na string "Hello, world!" e imprimir a parte da string que vem depois dela:

## strlcat
- A função strlcat é uma função da biblioteca padrão de C que é usada para concatenar duas strings de forma segura, garantindo que o tamanho do buffer de destino é respeitado e que o resultado final é sempre uma string válida e terminada com um caractere nulo.

- A sintaxe da função é a seguinte:

```c
size_t strlcat(char *dst, const char *src, size_t size);
```
- Os parâmetros da função são:
 - dst: um ponteiro para a string de destino, que receberá a concatenação.
 - src: um ponteiro para a string de origem, que será concatenada à string de destino.
 - size: o tamanho do buffer de destino, em bytes.

- A função retorna o comprimento total da string concatenada, que é o comprimento da string de destino original mais o comprimento da string de origem.
- A função strlcat é uma alternativa mais segura para a função strcat, que também é usada para concatenar strings, mas não verifica o tamanho do buffer de destino, o que pode levar a problemas de estouro de buffer.
- Segue abaixo um exemplo de uso da função strlcat:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = ", world!";
    size_t str_len = strlcat(str1, str2, sizeof(str1));
    printf("Resultado: %s (comprimento %zu)\n", str1, str_len);
    return 0;
}
```
- Neste exemplo, a função strlcat é usada para concatenar as strings "Hello" e ", world!" e o resultado é armazenado na string str1. Como o tamanho máximo da string de destino é 20 bytes, a função strlcat garante que o resultado final não exceda esse tamanho, e retorna o comprimento total da string concatenada (13 bytes). O resultado final impresso no console é:

```
Resultado: Hello, world! (comprimento 13)
```
