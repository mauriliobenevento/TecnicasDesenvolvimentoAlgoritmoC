//  Algoritmo021
//
//  Lê três variáveis e verifica qual a maior entre elas ou se são iguais.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf ("Qual o valor de A..: ");
    scanf("%d", &a);
    
    printf ("Qual o valor de B..: ");
    scanf("%d", &b);
    
    printf ("Qual o valor de C..: ");
    scanf("%d", &c);
    
    if (a>b && a>c)
        printf ("A é maior...: %d\n",a);
    else if (b>a && b>c)
        printf ("B é maior...: %d\n",b);
    else if (c>a && c>b)
        printf ("C é maior...: %d\n",c);
    else
        printf ("São iguais\n");
    
    getchar();
    
}
