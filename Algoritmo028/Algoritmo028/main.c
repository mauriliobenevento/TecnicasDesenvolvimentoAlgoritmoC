//  Algoritmo028
//
//  tratando o Resto de divisão
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,y;    // duas varmem inteiras
    
    x=5;        // atribuindo 5 à X
    y=2;        // atribuindo 2 à X
    
    printf("X / Y.......: %i", x/y);        // divisão de 5/2 - como são inteiras retornará 2
    printf("\nX / Y com %%.: %i", x%y);     // divisão de 5/2 - deve restar 1
    getchar();
    
}
