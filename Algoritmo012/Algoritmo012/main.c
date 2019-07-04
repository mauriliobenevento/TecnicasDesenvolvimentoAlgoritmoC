//  Algoritmo012
//
//  O operador (+=) diz ao compilador para incrementar a x o valor de x mais 10.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    int x=0;
    x = x+10;
    
    printf("Valor de X apos a atribuicao....: %d", x);
    
    
    x=1;
    x +=10;     // incremento é diferente de atribuição
    
    printf("\n\nValor de X apos o incremento....: %d\n\n", x);
    
    getchar(); // lembre-se, vc deve usar system("pause") ao invés de getchar()
    
}
