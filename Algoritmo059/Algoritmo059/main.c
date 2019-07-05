//  Algoritmo058
//
//  Alterando o conteudo de indice no vetor.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int count=0;
    int totalnums, ind;
    
    do {
        printf("\n\tPopule os indices e precione 000 para sair:\n\t-->");
        scanf ("%d", &vetor[count]);
        count++;
        system("cls");
        printf ("\n\n\tValor digitado no indice anterior: %d\n", vetor[count-1]);
    } while(vetor[count-1]!=000 && count<11);
    
    totalnums=count-1;
    
    printf ("\n\tOs numeros digitados foram:\n");
    
    for (count=0;count<totalnums;count++){
        printf ("\n\tVetor[%d]:%d", count, vetor[count]);
    }
REFAZ:
    do{
        printf("\n\n\tQual o indice que voce deseja alterar? Digite 10 para sair\n\t-->");
        scanf("%d", &ind);
        if (ind>=0 && ind<totalnums && ind!= 10){
            printf ("\n\n\tInsira um novo valor para o indice %d:\n\t-->", ind);
            scanf ("%d", &vetor[ind]);
        } else if (ind == 10){
            printf("\n\n\tSaindo da modificacao de indice");
        } else {
            printf ("\n\n\tIndice inexistente");
            goto REFAZ;
        }
    } while (ind<totalnums);
    
    printf ("\n\tOs numeros digitados foram:\n");
    
    for (count=0;count<totalnums;count++){
        printf ("\n\tVetor[%d]:%d", count, vetor[count]);
    }
    getchar();

}


