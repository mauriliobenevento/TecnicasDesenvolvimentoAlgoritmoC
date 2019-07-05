//  Algoritmo046
//
//  Encadeando laços (condicionais) - decrescente
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int laco_principal, laco1, laco2;
    
    for (laco_principal=1; laco_principal<=3; laco_principal++){
        // este laço roda 3 vezes
        printf("\n### Laço Principal...: %d ### ",laco_principal);
        for (laco1=5; laco1>=0; laco1--) // decrementando
            printf("\n@@@ Laço Interno 1...: %d @@@",laco1);
        for (laco2=5; laco2>=0; laco2--) // este roda 5
            printf("\n&&& Laço Interno 2...: %d &&&",laco2);
    }
    getchar();
}
