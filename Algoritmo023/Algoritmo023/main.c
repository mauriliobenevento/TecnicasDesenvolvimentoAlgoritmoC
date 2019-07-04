//  Algoritmo023
//
//  Lê três variáveis e envia como parâmetro para uma função.
//  A função devolve qual a maior entre elas.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int resolve(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
        return (n1);
    else if (n2>n1 && n2>n3)
        return(n2);
    else
        return(n3);
}

int main()
{
    int x=0, y=0, z=0, w=0;
    
    printf("Digite um numero para X...: ");
    scanf("%d",&x);
    
    printf("Digite um numero para Y...: ");
    scanf("%d",&y);
    
    printf("Digite um numero para Z...: ");
    scanf("%d",&z);
    
    
    w=resolve(x,y,z);
    
    printf("\n\n O maior numero entre eles eh..: %d\n\n",w);
    
    getchar();
    
}
