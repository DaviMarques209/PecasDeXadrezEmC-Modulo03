#include <stdio.h>

int main(){

//AVENTUREIRO
//Torre

int torreDireita = 1;

while(torreDireita <= 5){
    printf("Torre se moveu %d casas para a direita\n", torreDireita);
    torreDireita++;
}

printf("\n\n");

// Bispo

int cima = 1;
int direita = 1;

do{
    printf("Bispo se movimentou %d casa para cima e %d casa para a direita\n", cima, direita);
    cima++;
    direita++;
}while(cima <= 5);

printf("\n\n");

//Rainha

for(int rainhaEsquerda = 1; rainhaEsquerda <= 8; rainhaEsquerda++){
    printf("rainha se movimentou %d casas para a esquerda\n", rainhaEsquerda);
};

printf("\n\n");

//Cavalo

int cavaloEsquerda = 1;
int cavaloBaixo = 1;

while(cavaloEsquerda <= 1){
	
do{
printf("Cavalo moveu %d casas para baixo\n", cavaloBaixo);
cavaloBaixo++;
}while(cavaloBaixo <= 2);
printf("Cavalo moveu %d casa para a esquerda\n", cavaloEsquerda);
cavaloEsquerda++;
}

    return 0;
}