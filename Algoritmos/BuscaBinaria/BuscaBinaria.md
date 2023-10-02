A busca é feita em vetores **ordenados** e **sem números repetidos**, inicialmente deve-se obter o número a ser buscado, então é realizado o procedimento que segue:

**Primeira execução do laço:**

```
inicio = 0
fim = 9
posi = (inicio + fim) / 2
posi = (0 + 9) / 2 = 4.5
parte inteira de posi = 4
```

[2, 4, 7, 9, 12, 15, 18, 20, 24, 30] **<- Vetor**

[0, 1, 2, 3, **04**,  05,  06,  07,  08,  09] **<- Índices**

--- 

Em vez de se comparar o elemento procurado ao primeiro elemento da sequência, pode-se compará-lo a um elemento do meio da sequência. Se o elemento comparado é o desejado, a busca termina, senão, pode-se verificar se o elemento desejado é o maior ou menor que o elemento encontrado. Como todos os elementos estão ordenados, essa verificação elimina a metade da sequência onde o elemento não pode estar. Como o número procurado é menor que o número da posição 4, a metade posterior da lista poderá ser descartada da próxima comparação.

A busca é feita em vetores **ordenados** e **sem números repetidos**, inicialmente deve-se obter o número a ser buscado, então é realizado o procedimento que segue:

**Segunda execução do laço:**

```
inicio = 0
fim = posi - 1 = 4 -1 = 3
posi = (inicio + fim) / 2
posi = (0 + 3) / 2 = 1.5
parte inteira de posi = 1
```

[2, 4, 7, 9, 12, 15, 18, 20, 24, 30] **<- Vetor**

[0, **1**, 2, 3, 04,  05,  06,  07,  08,  09] **<- Índices**

---

A segunda comparação será feita com o elemento do meio da sequência que restou e o procedimento anterior se repetirá. Dessa forma, cada vez que um elemento não for encontrado, o conjunto de pesquisa será reduzido pela metade, aproximadamente, até que o elemento seja encontrado ou até que a lista não possa ser dividida. Compara-se o número da posição 1 (número 4) com o número procurado (número 9). Se forem iguais, a execução do laço será encerrada; do contrário, uma nova posição será calculada. Como o número procurado é maior que o número da posição 1, temos um novo início.

**Terceira execução do laço:**

```
inicio = posi + 1 = 1 + 1 = 2
fim = 3
posi = (inicio + fim) / 2
posi = (2 + 3) / 5 = 2.5
parte inteira de posi = 2
```

[2, 4, 7, 9, 12, 15, 18, 20, 24, 30] **<- Vetor**

[0, 1, **2**, 3, 04,  05,  06,  07,  08,  09] **<- Índices**

---

Compara-se o número da posição 2 (número 7) com o número procurado (número 9). Se forem iguais, a execução do laço será encerrada; do contrário, uma nova posição será calculada. Como o número procurado é maior que o número da posição 2, temos um novo início.

**Quarta execução do laço:**

```
inicio = posi + 1 = 2 + 1 = 3
fim = 3
posi = (inicio + fim) / 2
posi = (3 + 3) / 2 = 3
parte inteira de posi = 3
```

[2, 4, 7, 9, 12, 15, 18, 20, 24, 30] **<- Vetor**

[0, 1, 2, **3**, 04,  05,  06,  07,  08,  09] **<- Índices**

---

Compara-se o número da posição 3 (número 9) com o número procurado (número 9). Se forem iguais, a execução do laço será encerrada. Como o número da posição 3 é igual ao número procurado, a busca será encerrada.

As comparações serão realizadas até o número procurado ser encontrado ou até a variável **fim** ser menor que a variável **inicio**.
