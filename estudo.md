# Estudo

## ulstr upper to lower / lower to upper
- se av >= A e Z >= av
- entao se av >= a e z >= av
___

## rot13 
- se av >= a e av <= m +13 (mesmo para A e M)
- entao se av >= n e av <= z -13 (mesmo para N e Z)

## rotone 
- substitui uma letra pela proxima (Z torna A, a torna b)
```c
while (av[1][i])
{
        if (av[1][i] >= 'a' && av[1][i] <= 'y')
                av[1][i] += 1;
        if (av[1][i] >= 'A' && av[1][i] <= 'Y')
                av[1][i] += 1;
        if (av[1][i] == 'z' || av[1][i] == 'Z')
                av[1][i] -= 25;
        write(1, &av[1][i], 1);
        i++;
}
```
___
