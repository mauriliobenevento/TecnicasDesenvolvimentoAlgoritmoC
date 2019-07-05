//  Algoritmo056
//
//
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//


/*
 Vetores nada mais sao que matrizes unidimensionais. Vetores sao uma estrutura de dados
 muito utilizada. É importante notar que vetores, matrizes bidimensionais e matrizes de
 qualquer dimensao sao caracterizadas por terem todos os elementos pertencentes ao mesmo
 tipo de dado. Para se declarar um vetor podemos utilizar a seguinte forma geral:
 
 tipo_da_variavel nome_da_variavel [tamanho];
 
 Quando o C ve uma declaracao como esta ele reserva um espaco na memoria suficientemente
 grande para armazenar o numero de celulas especificadas em tamanho. Por exemplo,
 se declararmos:
 
 float exemplo [20];
 o C ira reservar 4x20=80 bytes. Estes bytes sao reservados de maneira contigua.
 Na linguagem C a numeracao comeca sempre em zero. Isto significa que, no exemplo acima,
 os dados serao indexados de 0 a 19. Para acessa-los vamos escrever:
 
 exemplo[0]
 exemplo[1]
 .
 .
 .
 exemplo[19]
 Mas ninguem o impede de escrever:
 
 exemplo[30]
 exemplo[103]
 
 Por que? Porque o C nao verifica se o indice que voce usou esta dentro dos limites validos. Este e um cuidado que voce deve tomar. Se o programador nao tiver atencao com os limites de validade para os indices ele corre o risco de ter variaveis sobreescritas ou de ver o computador travar. Bugs terriveis podem surgir. Vamos ver agora um exemplo de utilizacao de vetores:
 
 */

#include <stdio.h>
int main ()
{
    
    int num[5];  /* Declara um vetor de inteiros de 5 posicoes */
    int count=0;
    int totalnums;
    
    do
    {
        printf ("\nEntre com um numero (000 p/ terminar): ");
        scanf ("%d",&num[count]);
        count++;
    }
    while (num[count-1]!=000);
    
    totalnums=count-1;
    printf ("\n\n\n\t Os numeros que voce digitou foram:\n\n");
    
    for (count=0;count<totalnums;count++)
        printf (" %d",num[count]);
    getchar();
    return(0);
}
