# C07

## strdup
- **strdup** e uma funcao que **duplica a string fornecida**
- Esta presente na biblioteca **stdlib.h**
```c
char    *ft_strdup(char *src)
{
        char    *ptr;
	
	/* malloc
	* Dynamic memory allocation */
        ptr = malloc(sizeof(char) * (ft_strlen(src) + 1));
        if (ptr == NULL)
                return (NULL);
        ft_strcpy(ptr, src);
        return (ptr);
}
```
- A memória alocada dinamicamente vem de um pool de memória conhecido como\
**heap** (amontoar).

##
