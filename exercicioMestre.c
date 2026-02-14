#include <stdio.h>

void torre(int torreD){
    if(torreD <= 5){
        printf("Torre se movimentou %d casas\n", torreD);
            torre(torreD + 1);
    }
}

void bispo(int bispoC, int bispoD){
    if(bispoC <= 5 && bispoD <=  5){
        printf("Bispo se movimentou %d para cima e %d para a direita\n", bispoC, bispoD);
          bispo(bispoC + 1, bispoD + 1);
    }

}

void rainha(int rainhaD){
    if(rainhaD <= 8){
        printf("Rainha se movimentou %d casas\n", rainhaD);
        rainha(rainhaD + 1);
    }
}


int main(){

//MESTRE

int numT = 1;
int numB = 1 ;
int numR = 1;

torre(numT);
printf("\n\n");
bispo(numB, numB);
printf("\n\n");
rainha(numR);
printf("\n\n");

for(int cavaloD = 1; cavaloD <= 1; cavaloD++ ){
    for(int cavaloC = 1; cavaloC <= 2; cavaloC++){
        printf("cavalo se movimentou %d casa para cima\n", cavaloC);
    }
    printf("cavalo se movimentou %d casas para a direita\n", cavaloD);
}


return 0;
    
}