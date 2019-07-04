//  Algoritmo011
//
//  Soma as notas e avalia com IF a entrada de dados com Scanf. Avalia se a soma é maior ou menor do que 6.
//  Somente o primeiro nome e sem espaços e formatação das casas decimais.
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    float a1,a2,soma;
    char nome[30];
    
    printf("Entre com o Nome...: ");
    scanf(" %s",&nome);
    
    printf("Entre com a Nota 1...: ");
    scanf(" %f",&a1);
    
    printf("Entre com a Nota 2...: ");
    scanf(" %f",&a2);
    
    printf("\n\nA Nota 1 digitada foi: %.2f",a1);
    printf("\nA Nota 2 digitada foi: %.2f",a2);
    
    soma=(a1+a2);
    
    printf("\n\nA Media final e...: %.2f\n\n",soma);
    
    if (soma>6)
        printf("\n\nAluno: %s foi aprovado(a) com a Media -> %.2f\n\n",nome,soma);
    else
        printf("\n\nAluno: %s foi reprovado(a) com a media -> %.2f\n\n",nome,soma);
    
}
