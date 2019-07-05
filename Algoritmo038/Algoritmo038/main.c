//  Algoritmo038
//
//  Utilizando o operador ? para testar a condição 1.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>
int main(void)
{
    int a,b;
    a=2;
    
    b = a>2 ? 10 : 20; // Se a é maior que 2 então é 10, senão 20. Neste caso a é 2.
    printf("%i", b);
    
    getchar();
}
