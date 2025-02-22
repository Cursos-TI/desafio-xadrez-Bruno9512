#include<stdio.h>

int main(){
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
    printf("Movimento da torre.\n");

    while(torre <= 9){
        printf("Direita\n", torre);
        torre++;
    }
    printf("Movimento do bispo.\n");

    do{
        printf("Cima,direita\n", bispo);
        bispo++;
    }while(bispo <= 9);

    printf("Movimento da rainha.\n");

    for(int rainha = 8; rainha <= 15; rainha++){
        printf("Esquerda\n", rainha);
    }



}