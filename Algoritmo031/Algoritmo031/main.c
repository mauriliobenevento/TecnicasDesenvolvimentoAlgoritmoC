//  Algoritmo031
//
//  Trabalhando com vetores outro exemplo. Agora
//  incremente os indices dos vetores com mais 3.
//  Com base no algoritmo anterior.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int main(void)
{
    int vetor[10];
    
    vetor[0] = 10;
    vetor[1] = 11;
    vetor[2] = 22;
    vetor[3] = 33;
    vetor[4] = 44;
    vetor[5] = 55;
    vetor[6] = 66;
    vetor[7] = 77;
    vetor[8] = 88;
    vetor[9] = 99;
    
    printf("Vetor 0....: %i",   vetor[0]+3);
    printf("\nVetor 1....: %i", vetor[1]+3);
    printf("\nVetor 2....: %i", vetor[2]+3);
    printf("\nVetor 3....: %i", vetor[3]+3);
    printf("\nVetor 4....: %i", vetor[4]+3);
    printf("\nVetor 5....: %i", vetor[5]+3);
    printf("\nVetor 6....: %i", vetor[6]+3);
    printf("\nVetor 7....: %i", vetor[7]+3);
    printf("\nVetor 8....: %i", vetor[8]+3);
    printf("\nVetor 9....: %i", vetor[9]+3);
    getchar();
}
