//  Algoritmo017
//
//  Fazer a leitura do teclado de qualquer tecla e mostrar qual foi digitada.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int main()
{
    
    char ch;
    
    printf ("Pressione uma tecla : ");
    
    ch = getchar();
    
    printf ("\n\nVocê pressionou a tecla ->  %c\n\n",ch);
    
    getchar(); // use o system("pause") caso esteja utilizando o windows
    
}


