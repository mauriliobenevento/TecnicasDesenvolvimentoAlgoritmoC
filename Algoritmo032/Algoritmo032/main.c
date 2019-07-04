//  Algoritmo032
//
//  Utilizando o IF para testar o conteúdo de um vetor.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    
    char s[80];
    
    s[0] = 'c';
    s[1] = 'i';
    s[2] = 'e';
    s[3] = 'n';
    s[4] = 'c';
    s[5] = 'i';
    s[6] = 'a';
    
    
    if(s[11]=='f')
        printf("Faca\n");
    printf("Conteudo da posicao 0 do vetor....: %c", s[0]);
    printf("\nConteudo da posicao 1 do vetor....: %c", s[1]);
    printf("\nConteudo da posicao 2 do vetor....: %c", s[2]);
    printf("\nConteudo da posicao 3 do vetor....: %c", s[3]);
    printf("\nConteudo da posicao 4 do vetor....: %c", s[4]);
    printf("\nConteudo da posicao 5 do vetor....: %c", s[5]);
    printf("\nConteudo da posicao 6 do vetor....: %c", s[6]);
    
    getchar();
}
