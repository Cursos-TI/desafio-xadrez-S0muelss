#include <stdio.h>
//recursividade para movimentação da torre
void moveTorre (int mt){ //declaração do bloco de código

  if (mt > 0){
    printf("Direita\n"); // saída do movimento
    moveTorre(mt - 1); // mecanismo para não gerar loop infinitos
  }
}

// recursividade movimentação da rainha
void moveRainha (int mr){//declaração do bloco de código
  if (mr > 0){
  printf("Esquerda\n"); //saída do movimento
  moveRainha(mr-1); // mecanismo para não gerar loop infinitos
  }
}

//recursividade para movimentação do bispo
void moveBispo (int mb){//declaração do bloco de código
  if (mb > 0){
    printf("Cima/Direita\n");//saída do movimento
    moveBispo(mb-1);// mecanismo para não gerar loop infinitos
  }
}

int main() {
  
// movimentação da torre
 moveTorre(5); // chamada para movimentação da torre com recursividade

//movimentação da rainha
moveRainha(8); // chamada para a movimentação da rainha
 
// movimentação bispo
moveBispo(8); //chamada para movimentação do bispo

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