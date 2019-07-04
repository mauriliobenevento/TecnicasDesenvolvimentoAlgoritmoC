//  Algoritmo016
//
//  Fazer a leitura do teclado e verificar com IF se foi digitada a letra p.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    if  (ch == 'p')
        printf ("você pressionou a tecla p\n\n");
    getchar();
}

