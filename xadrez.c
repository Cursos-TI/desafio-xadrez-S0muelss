#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
// movimentação da torre
for(int mt = 0; mt <= 5 ; mt++){ //logica que simula a movimentação da torre
    printf("Torre movimentada  a direita\n"); // saida indicando a direção da torre
}
 //movimentação da rainha
 int movimentacaorainha = 0; // variável para gerar a simulação
  while(movimentacaorainha < 8){ //simulação do movimento
    printf("Rainha movimentada a esquerda\n"); // indicação do movimento
    movimentacaorainha ++;//quebra de looping
}
// movimentação bispo
int i, movimentacaoBispo = 0;
printf("ESCOLHA UMA DIREÇÃO MPARA MOVIMENTAR O BISPO\n"); //escolha das direções de movimentação
printf("[1]- DIAGONAL DIREITA\n");
printf("[2]-DIAGONAL ESQUERDA\n");
scanf("%d", &i);

do{
if(i== 1){ // loop para simular a movimentação
    printf("Bispo foi movimentado diagonalmente a direita\n"); 
}else if (i == 2){ //saida informando a direção
    printf("Bispo foi movimentado diagonalmente a esquerda\n");
} else{
    printf("Opção inválida"); // caso seja uma opção que não atenda a condição
}
movimentacaoBispo++; // atualização para evitar o loopin infinito
}while(movimentacaoBispo < 8);
 return 0;
}


