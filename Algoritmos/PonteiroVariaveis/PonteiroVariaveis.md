A variável do tipo ponteiro é capaz de armazenar e manipular endereços de memória. Por exemplo, quando usamos int a, estamos declarando uma variável do tipo inteiro. Já, quando usamos int *a estamos declarando uma variável do tipo ponteiro para inteiro, isto é, uma variável capaz de armazenar um endereço de memória que tem como conteúdo um número inteiro.

O operador unário & ("endereço de"), aplicado a variáveis, resulta no endereço de memória da posição da memória reservada para a variável. O operador unário *("conteúdo de"), aplicado a variáveis do tipo ponteiro, acessa o conteúdo do endereço de memória armazenado pela variável ponteiro.

Exemplo:

```
//Declarando as variáveis
int a;
int *p;

a = 5; //a recebe 5
p = &a; //p recebe o endereço de a

*p = 6; //conteúdo de p recebe 6, ou seja, a variável a recebe 6
```