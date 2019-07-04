//  Algoritmo036
//
// Melhorando o algoritmo anterior, acrescentando raiz e potência ao final
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char ch;
    float num1, num2;
    
    printf("Entre com a sua Escolha: (+) (-) (s) Sair...: ");
    ch=getchar();
    
    printf("\n\nDigite o primeiro numero....: ");
    scanf("%f",&num1);
    printf("\nDigite o segundo numero....: ");
    scanf("%f",&num2);
    
    switch(ch) {
        case '+':
            printf("\n\nSomando......: %3.2f\n\n", num1+num2);
            break;
        case '-':
            printf("\n\nSubtraindo...: %3.2f\n\n", num1-num2);
            break;
        default:
            printf("\n\nEscolheu fim do programa");
    }
    printf("\n\nRaiz do Primeiro numero..: %3.2f\n\n",sqrt(num1));
    printf("\n\nPotencia usando o Num1 como base e Num2 como potencia.: %3.2f\n\n",pow(num1,num2));
    getchar();
}

