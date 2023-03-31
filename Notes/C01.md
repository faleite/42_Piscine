# Anotacoes do C01

## Funcao strcpy
- A função strcpy() copia a string apontada por src, incluindo o byte nulo de terminação ('\0'), para o buffer apontado por dest. As strings não podem se sobrepor e a string de destino dest deve ser grande o suficiente para receber a cópia.

## Funcao strncpy
- A função strncpy() é semelhante, exceto que no máximo n bytes de src são copiados. Aviso: Se não houver nenhum byte nulo entre os primeiros n bytes de src, a string colocada em dest não terá terminação nula.
Se o comprimento de src for menor que n, strncpy() gravará bytes nulos adicionais em dest para garantir que um total de n bytes seja gravado.

## Tamanho de uma string (strlen)

```c
int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
        {
                i++;
        }
        return (i);
}
```

```c
#include <stdio.h>

int main()
{
    char    *src;

    src = "Teste";
    int     i;

    i = 0;
    /* while (src[i])  // Tambem funciona desta forma */
    while (i <= src[i])
    {
            i++;
    }

    printf("Tamanho: %d\n", i);
    return 0;
}
```
