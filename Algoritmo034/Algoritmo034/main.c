//  Algoritmo034
//
//  Trabalhando com switch.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    
    printf("1.. Rotina de Calculo  ");
    printf("\n2.. Corrigir o programa");
    printf("\n3.. Analise de contas  ");
    printf("\nPressione qualquer outra tecla para abandonar");
    printf("\n\n     Entre com a sua Escolha:  ");
    
    ch=getchar(); // le do teclado a selecao
    
    switch(ch) {
        case '1':
            printf("\n\nO calculo foi iniciado\n\n");
            break;
        case '2':
            printf("\n\nCorrigir data e hora\n\n");
            printf("\n\ndate");
            break;
        case '3':
            printf("\n\nProcura arquivos\n\n");
            break;
        default:
            printf("\n\nNenhuma opcao foi selecionada");
    }
}

