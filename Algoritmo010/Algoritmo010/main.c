//  Algoritmo010
//
//  Media sem nome e sem tratar se passou ou não
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


#include <stdio.h>

int main()
{
    
    float a,b,c,d,media;
    
    printf("Entre com a Nota 1...: ");
    scanf("%f",&a);
    
    printf("Entre com a Nota 2...: ");
    scanf("%f",&b);
    
    printf("Entre com a Nota 3...: ");
    scanf("%f",&c);
    
    printf("Entre com a Nota 4...: ");
    scanf("%f",&d);
    
    printf("\n\nA Nota 1....: %f",a);
    printf("\nA Nota 2....: %f",b);
    printf("\nA Nota 3....: %f",c);
    printf("\nA Nota 4....: %f",d);
    
    media=(a+b+c+d)/4;
    
    printf("\n\nA Media final e...: %f\n\n",media);
    
    getchar(); // caso esteja utilizando windows, mude para: system("pause");
    
}
