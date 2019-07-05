//  Algoritmo054
//
//  Exemplo do switch com laço while
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>
int main()
{
    int opcao=0;
    
    while (opcao !=5)
    {
        printf("\n\n Escolha uma opcao entre 1 e 5: ");
        scanf("%d", &opcao);
        
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
    getchar();
    return(0);
}


