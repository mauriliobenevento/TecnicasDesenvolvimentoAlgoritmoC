//  Algoritmo042
//
// O operador virgula e soma no printf, são usados para encadear expressões.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    
    int x,y=0;
    
    printf("Atribuindo conforme as virgulas........: %d\n", x=(y=3,y+1));
    printf("Somando aqui dentro do Printf..........: %d", x=(x=3+1,x+3));
    
    getchar();
}
