//  Algoritmo008
//
//  Criando variáveis inteiras e atribuindo valores, somando e mostrando o total
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int main()
{
    int val1=3,val2=4,val3=2,soma;
    int anonasc=1987;
    int anoatual=2019;
    
    
    soma=val1+val2+val3;
    
    printf("O valor total é: %d\n",soma);
    printf("A idade é: %d\n",anoatual-anonasc
           );
    
    getchar(); // caso esteja utilizando windows, mude para: system("pause");
}
