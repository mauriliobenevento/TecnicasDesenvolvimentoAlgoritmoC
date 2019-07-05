//  Algoritmo052
//
//  Cria um vetor com 80 posições e coloca nele números
//  (utilizando for) multiplos de 2 até completar o vetor.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int vetor[80];
    
    for(int i=0; i <=79; i++){
        vetor [i] =2*i;
        printf("Vetor (%i): %i\n", i, vetor [i]);
        
    }
}
