//  Algoritmo009
//
//  Criando variáveis inteiras e solicitando entrada com scanf, somando e mostrando o total
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c,d,soma;
    
    printf("entre com o valor; de a...: ");
    scanf("%d",&a);
    
    printf("entre com o valor; de b...: ");
    scanf("%d",&b);
    
    printf("entre com o valor; de c...: ");
    scanf("%d",&c);
    
    printf("entre com o valor; de d...: ");
    scanf("%d",&d);
    
    soma=a+b+c+d;
    
    printf("O valor total é: %d\n\n",soma);
    getchar(); // caso esteja utilizando windows, mude para: system("pause");
    
}


