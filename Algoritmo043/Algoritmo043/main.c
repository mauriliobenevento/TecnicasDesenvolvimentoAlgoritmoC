//  Algoritmo043
//
//  Encadeando laços (condicionais)
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int laco_principal, laco1;
    
    for (laco_principal=1; laco_principal<=2; laco_principal++){ 
        printf("\n### Primeiro Laço...: %d ### ",laco_principal);
        for (laco1=1; laco1<=10; laco1++)
            printf("\n@@@ Laço Interno 1...: %d @@@",laco1);
    }
    getchar();
}

