//  Algoritmo055
//
//  Exemplo do switch com laço while e GOTO
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int main()
{
    int opcao=0;
    while (opcao != 5)
    {
    REFAZ: printf("\n\n Escolha uma opcao entre 1 e 5: ");
        scanf("%d", &opcao);
        
        if ((opcao >5)&&(opcao <=7))
            printf("Dentro do Goto");
        getchar();
        goto REFAZ;  // volta ao rotulo REFAZ
        switch (opcao)
        {
            case 1:
                printf("\n --> Primeira opcao..");
                break;
            case 2:
                printf("\n --> Segunda opcao..");
                break;
            case 3:
                printf("\n --> Terceira opcao..");
                break;
            case 4:
                printf("\n --> Quarta opcao..");
                break;
            case 5:
                printf("\n --> Abandonando..");
                break;
        }
    }
    return(0);
}





