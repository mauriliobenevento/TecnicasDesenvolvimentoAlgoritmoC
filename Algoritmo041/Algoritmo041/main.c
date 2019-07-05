//  Algoritmo041
//
//  Atibuindo valor para mais varmem de uma vez e utilizando incremento e decremento.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    
    int x,y,z;
    
    x=y=z=10;
    x++;
    y++;
    z++;
    
    printf("X incrementado.....: %d\n", x);
    printf("Y incrementado.....: %d\n", y);
    printf("Z incrementado.....: %d\n\n", z);
    getchar();
    
    x--;
    y--;
    z--;
    
    printf("X decrementado.....: %d\n", x);
    printf("Y decrementado.....: %d\n", y);
    printf("Z decrementado.....: %d\n\n", z);
    getchar();
    
    x=++x+1;
    y=++y+1;
    z=++z+1;
    
    printf("X incrementado antes e depois.....: %d\n", x);
    printf("Y incrementado antes e depois.....: %d\n", y);
    printf("Z incrementado antes e depois.....: %d", z);
    getchar();
    
}
