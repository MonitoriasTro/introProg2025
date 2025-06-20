# Mega Trô

Este programa simula um jogo de apostas similar à Mega-Sena. O usuário escolhe entre 6 e 10 números e o programa sorteia 6 dezenas aleatórias. Em seguida, ele informa quantas e quais dezenas foram acertadas e exibe mensagens especiais para 4, 5 ou 6 acertos.

---

## Estrutura Geral

- O programa utiliza vetores globais para armazenar as apostas, números sorteados, e acertos.
- As funções estão organizadas em: **resetar vetores**, **ordenar vetores**, **registrar aposta**, **realizar sorteio**, e **programa principal** (`main`).
- O sorteio é feito com números aleatórios de 1 a 60, e não podem se repetir.

---

## Variáveis Globais

```c
int aposta[10], q, sorteados[6], corretas = 0, vetor_corretas[6];
```

- `aposta[10]`: guarda os números apostados pelo jogador.
- `q`: quantidade de dezenas que o jogador escolheu (entre 6 e 10).
- `sorteados[6]`: números sorteados pelo programa.
- `corretas`: contador de quantos acertos o jogador teve.
- `vetor_corretas[6]`: armazena os números que o jogador acertou.

---

## Função `resetarVetores()`

```c
void resetarVetores()
```

- Reinicia os vetores e variáveis globais antes de cada nova rodada.
- Garante que nenhuma informação da rodada anterior interfira na atual.

---

## Função `ordenarVetor()`

```c
void ordenarVetor(int vetor[], int tamanho)
```

- Ordena os números em ordem crescente usando um método simples de comparação e troca.
- Facilita a visualização dos resultados para o usuário.

---

## Função `apostaFunc()`

```c
void apostaFunc()
```

- Solicita ao usuário que digite de 6 a 10 dezenas.
- Garante que:
  - Os números estejam entre 1 e 60.
  - Não haja números repetidos.
- Ao final, exibe os números apostados em ordem crescente.

---

## Função `sorteioFunc(char nome[])`

```c
void sorteioFunc(char nome[])
```

- Gera 6 dezenas aleatórias entre 1 e 60, sem repetições.
- Compara os números sorteados com as apostas do usuário.
- Conta e exibe os acertos.
- Exibe mensagens especiais para:
  - 4 acertos: **QUADRA_TRO**
  - 5 acertos: **QUINA_TRO**
  - 6 acertos: **SENA_TRO**

---

## Função `main()`

```c
int main()
```

- Recebe o nome do usuário com `gets(nome)`.
- Usa `srand(time(NULL))` para inicializar a geração aleatória.
- Entra em um laço que roda enquanto o usuário não pressionar ESC (`27`).
- Em cada rodada:
  - Reseta os vetores.
  - Recebe a aposta.
  - Realiza o sorteio e mostra os resultados.
- Finaliza com a mensagem: `"Obrigado por jogar!"`

---

## Observações Importantes

- **Função `getch()`**: espera o usuário apertar uma tecla sem mostrar na tela. Usada para sair ou jogar novamente.
- **Função `fflush(stdin)`**: limpa o buffer do teclado (pode ter comportamento indefinido em algumas plataformas).
- **Função `gets()`**: perigosa em C moderno por não prevenir estouro de buffer; prefira `fgets()`.

