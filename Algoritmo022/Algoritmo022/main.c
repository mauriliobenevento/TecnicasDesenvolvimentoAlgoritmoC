//  Algoritmo022
//
//  Lê duas variáveis e envia como parâmetro para uma função.
//  A função devolve qual a maior entre elas.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int maior(int n1, int n2)
{
    if (n1>n2)
        return (n1);
    else
        return (n2);
}


int main()

{
    int x=0,y=0,z=0;
    printf("Insira um numero para X: ");
    scanf("%d",&x);
    
    printf("\nInsira um numero para Y: ");
    scanf("%d",&y);
    
    z=maior(x,y);
    
    printf("\nO maior entre elas é: %d\n\n",z);
    
    getchar();
    
}
