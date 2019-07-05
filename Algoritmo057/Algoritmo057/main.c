//  Algoritmo057
//
// Vetor com a digitação contralada por Do While, com debug
// e com encerramento de 3 formas, sendo uma por açao do usuário.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>
int main ()
{
    int num[100];  /* Declara um vetor de inteiros de 100 posicoes */
    int count=0;
    int totalnums=0;
    
    do
    {
        printf ("\nConteudo da Count neste laco..: %d",count); // debug 1
        printf ("\nEntre com um numero (000 p/ terminar): ");
        scanf ("%d",&num[count]);
        
        printf ("\nConteudo digitado no vetor..: %d",num[count]); // debug 2
        
        count++;
    }
    while (num[count-1]!=000 && count<6); // se for 0, 000 ou <6 encerra
    
    
    printf ("\nCount antes de -1 .:  %d", count); // debug 1
    totalnums=count-1;
    printf ("\n\n\n\t Os numeros que voce digitou foram:\n\n");
    
    for (count=0;count<totalnums;count++)
        printf (" %d",num[count]);
    
    getchar();
    return(0);
}

