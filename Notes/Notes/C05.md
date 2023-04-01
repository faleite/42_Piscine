# C05

## Fatorial
- Um fatorial é um número inteiro positivo que é o produto de todos os números inteiros positivos menores ou iguais a ele. O fatorial é representado por um ponto de exclamação (!) após o número. Por exemplo, o fatorial de 5 é representado por 5!, que é igual a 5 x 4 x 3 x 2 x 1 = 120.
- Fatorial e representado pelo simbolo **!**
 - 0! = 1
 - 1! = 1
 - 2! = 2 * 1 = 2
 - ...
- O maior fatorial que pode ser representado por um unsigned int é 12!. Isso ocorre porque um unsigned int tem 32 bits, o que permite representar valores até 4.294.967.295. O valor de 13! é maior do que isso, e portanto, não pode ser representado em um unsigned int.
- 12! é igual a 479001600, é o maior valor possível de fatorial para um unsigned int. 
- Se você tentar calcular fatoriais maiores do que 12 usando um unsigned int, o resultado será incorreto devido a um estouro de inteiro (integer overflow).

## Power (potencia de um numero)
- A potência de um número é definida como o resultado da multiplicação desse número por si mesmo várias vezes, de acordo com o expoente indicado. O expoente indica quantas vezes o número deve ser multiplicado por si mesmo.
- Por exemplo, se temos o número 2 elevado a potência 3, ou 2³, isso significa que devemos multiplicar 2 por si mesmo três vezes: 2 x 2 x 2 = 8. Portanto, 2³ = 8.
- De forma geral, se temos um número "a" elevado a um expoente "n", ou aⁿ, o resultado é a multiplicação de "a" por si mesmo "n" vezes: a x a x a x ... x a (n vezes).

## Fibonacci
- A sequência de Fibonacci é uma sequência numérica em que cada número subsequente é a soma dos dois números anteriores. A sequência começa com 0 e 1, e os primeiros números da sequência são:
 - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
- Assim, o terceiro número é a soma do primeiro e segundo número (0+1=1), o quarto número é a soma do segundo e terceiro número (1+1=2), o quinto número é a soma do terceiro e quarto número (1+2=3), e assim por diante.

## Raiz Quadrada (sqrt)
- A raiz quadrada é uma operação matemática que nos permite encontrar o valor do número que, quando multiplicado por ele mesmo, resulta em um número específico. O resultado da raiz quadrada é um número que é chamado de "raiz quadrada" do número original.
 - Por exemplo, a raiz quadrada de 9 é 3, porque 3 x 3 = 9. Da mesma forma, a raiz quadrada de 16 é 4, porque 4 x 4 = 16.
 - A raiz quadrada é denotada pelo símbolo √ e é usada para representar a operação. Por exemplo, √9 é a raiz quadrada de 9.

## Prime (numeros primos)
- Números primos são números inteiros maiores que 1 que são divisíveis apenas por 1 e por eles mesmos. Em outras palavras, um número primo é um número que não pode ser dividido uniformemente por qualquer outro número inteiro, exceto 1 e ele mesmo.
 - Por exemplo, os primeiros números primos são 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, etc.
