//  Algoritmo024
//
//  Ler a Idade e classificar conforme a tabela abaixo.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

/*
 
 Classificacao: (conforme abaixo:)
 
 idade <= 0 "idade errada"
 idade >  0  <13 Crianca
 idade >= 13 <18 Adolescente
 idade >= 18 <50 Adulto(a)
 idade >= 50 Melhor idade
 
 */


#include <stdio.h>

int main(void)
{
    
    int idade=0;
    
    printf ("Qual a Idade..: ");
    scanf("%i", &idade);
    
    if (idade<=0)
        printf ("Idade nao pode ser < ou igual a ZERO\n\n");
    else if (idade>0 && idade<13)
        printf ("Voce com %i anos ainda e CRIANCA\n\n",idade);
    else if(idade>=13 && idade<18)
        printf ("Voce com %i anos e ADOLESCENTE\n\n",idade);
    else if (idade >=18 && idade <50)
        printf ("Voce com %i anos e ADULTO\n\n",idade);
    else if (idade >=50)
        printf ("Voce com %i anos e da Melhor IDADE\n\n",idade);
}


