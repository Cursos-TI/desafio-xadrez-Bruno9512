#include<stdio.h>

void moverRainha(int casas){  //Definindo recursividade pro movimento da rainha.
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
void moverTorre(int casas){   //Definindo recursividade pro movimento da torre.
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo(int casas){  //Definindo recursividade pro movimento do bispo.
    for(int i = 0 ; i < 5; i++){ //Loop externo pro movimento vertical.
        printf("Cima\n");
        for(int j = 0; j < 1; j++){ //Loop externo pro movimento horizontal.
            printf("Direita\n");
            
        }
    }





}
    int main(){
        printf("Movimento da Rainha:\n"); //Chamada de procedimento do movimento da Rainha.
        moverRainha(8);
        printf("\n");

        printf("Movimento da Torre:\n"); //Chamada de procedimento do movimento da Torre.
        moverTorre(5);
        printf("\n");

        printf("Movimento do Bispo:\n"); //Chamada de procedimento do movimento do Bispo.
        moverBispo(1);
        printf("\n");

        printf("Movimento do Cavalo:\n"); //Loop de movimento do Cavalo.
        for(int i = 0; i < 3; i++){
            if(i < 2){
                printf("Cima\n");
            }else{
                printf("Direita\n");
            }
        }
        return 0;

    }
    