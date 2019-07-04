//  Algoritmo013
//
//  Incrementar o x até que fique com 41, mas que seja de 10 em 10.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x=0;
    x = x+10;
    printf("Valor de X....: %d", x);
    x=1;
    x +=10;
    x +=10;
    x +=10;
    x +=10;
    printf("\n\nValor de X incrementado....: %d\n\n", x);
    getchar();
}

