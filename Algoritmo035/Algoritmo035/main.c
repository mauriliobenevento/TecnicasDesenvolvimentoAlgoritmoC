//  Algoritmo035
//
// Utilizar o switch para entrar com sinais de Soma (+) e
// S++ubtração (-), ler duas varmem e calcular dentro do
// switch conforme a opção do usuário.
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
    
}

