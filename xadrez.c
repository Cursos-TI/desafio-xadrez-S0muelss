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
int movimentacaoBispo = 0;

do{
  printf("bispo movimentado para cima/direita");//descrição do movimento
  movimentacaoBispo++; // atualização para evitar o loopin infinito
}while(movimentacaoBispo < 8);
 


// movimentação do cavalo
int movimentacaoCavalufinal = 1; // variável para movimento final do cavalo

while(movimentacaoCavalufinal != 0){ // loopin externo para realizar o movimento final
   for(int i = 0; i < 2 ; i++) { //loop interno para realizar o primeiro movimento
     printf("Cima\n"); // saída do primeiro movimento
}
printf("Direita"); // saída do ultimo movimento
movimentacaoCavalufinal--; // decremento para finalização do movimento
}
return 0;

}