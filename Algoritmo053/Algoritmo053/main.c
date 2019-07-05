//  Algoritmo053
//
//  Criar um vetor de 10 posições
//  popular as posições ímpares com o números múltiplos de 2
//  popular as posições pares com números múltiplos de 3
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vetor[10];
    int a=3;
    int b=2;
    
    printf("Indice do Vetor          Conteudo\n");
    
    for(int i=0;i<=9;i++){
        if(i % 2==0){
            vetor[i] = a;
            a+=3;
        }else if(i){
            vetor[i] = b;
            b+=2;
        }
        printf("       %i                    %i \n",i,vetor[i]);
    }
}



