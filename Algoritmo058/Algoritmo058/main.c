//  Algoritmo058
//
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//



//
// 1. Cria uma biblioteca e atribui valor 10
// 2. Cria um vetor num, com o tamanho da biblioteca
// 3. atribui ao vetor uma sequencia de números
// 4. Mostra o conteúdo do vetor
// 5. Escolhe um índice do vetor
// 6. Substitui o valor do índice do vertor
// 7. Mostra o conteúdo do vetor após substituição
//

#include <stdio.h>
#define largura 10

int main ()
{
    int num[largura] = {10,9,3,4,5,212,33,45,54,66};
    int count=0;
    int indice=0;
    int subst=0;
    
    do
    {
        printf ("\nConteudo digitado no vetor..: %d",num[count]); // debug 2
        count++;
    }
    while (num[count-1]!=000 && count<10);
    
    getchar();
    //system("cls");
    
    printf ("\n\n Digite o indice do vetor para substituir: ");
    scanf("%d",&indice);
    printf ("\n\n Digite o valor para substituir: ");
    scanf("%d",&subst);
    
    num[indice]=subst;
    count=0;
    
    do
    {
        printf ("\nConteudo digitado no vetor..: %d",num[count]); // debug 2
        count++;
    }
    while (num[count-1]!=000 && count<6);
    
    getchar();
    return(0);
}
