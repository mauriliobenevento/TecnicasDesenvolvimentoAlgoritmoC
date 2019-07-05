//  Algoritmo060
//
//  Alterando o conteudo de indice no vetor.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

/*
Matrizes bidimensionais
 
 Já vimos como declarar matrizes unidimensionais (vetores).
 Vamos tratar agora de matrizes bidimensionais.
 
 A forma geral da declaração de uma matriz bidimensional é muito parecida com a
 declaraçao de um vetor:
 
 tipo_da_variavel nome_da_variavel [altura][largura];
 
 … muito importante ressaltar que, nesta estrutura, o índice da esquerda
 indexa as linhas e o da direita indexa as colunas.
 Quando vamos preencher ou ler uma matriz no C o índice mais a direita varia
 mais rapidamente que o índice a esquerda. Mais uma vez e bom lembrar que,
 na linguagem C, os indices variam de zero ao valor declarado, menos um;
 mas o C nao vai verificar isto para o usuario.
 Manter os indices na faixa permitida e tarefa do programador.

 */

#include <stdio.h>

int main ()
{
    int matrix [15][15];  // matriz 10 linhas 15 colunas
    int i,j,count;
    count=1;
    
    for (i=0;i<=15;i++) // laco para
        printf("Laco (i)...: %d\n",i);
    
    for (j=0;j<=15;j++)
    {
        //printf("\nLaco (j)...: %d",j);
        matrix[i][j]=count+1;
        printf("\n\t\t\tMatriz...: %i - %i",matrix[i][j]);
        count++;
    }
    getchar();
    return(0);
}


/*
 No exemplo acima, a matrix e preenchida, sequencialmente por linhas,
 com os numeros de 1 a 15. Voce deve entender o funcionamento do programa
 acima antes de prosseguir.
 */

