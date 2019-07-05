//  Algoritmo048
//
//  Encadeando 3 laços (condicionais) e realizando o processamento no terceiro.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int laco_principal, laco1, laco2;
    
    for (laco_principal=1; laco_principal<=2; laco_principal++){
        printf("\n### Laço Principal...: %d ### ",laco_principal);
        for (laco1=1; laco1<=2; laco1++){ //a diferena esta aqui
            printf("\n###Laço 1...: %d",laco1);
            for (laco2=1; laco2<=3; laco2++)
                printf("\nLaço 2...: %d",laco2);
        }} // a diferenca esta aqui.
    getchar();
}


