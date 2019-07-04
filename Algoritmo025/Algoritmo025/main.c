//  Algoritmo025
//
//  Ler salario e calcular IR conforme faixa -
//  Observe que cada condicao foi tratata dentro de cada IF
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

/*
 tabela de descontos de IR
 
 <= 1200 2%
 > 1200 e <= 3000 3%
 > 3000 e <= 5000 6%
 > 5000 e <= 9000 10%
 > 9000 15%
*/

#include <stdio.h>


int main(void)
{
    float salario=0,ir=0;
    
    printf("Qual o salario?  ");
    scanf("%f",&salario);
    
    if(salario<=1200){
        ir=salario*0.02;
        printf("IR...: %5.2f\n\n",ir);
        getchar();
    }
    else
        if(salario>1200 && salario<=3000){
            ir=salario*0.03;
            printf("IR...: %5.2f\n\n",ir);
            getchar();
        }
        else
            
            if(salario>3000 && salario<=5000){
                ir=salario*0.06;
                printf("IR...: %5.2f\n\n",ir);
                getchar();
            }
            else
                
                if(salario>5000 && salario<=9000){
                    ir=salario*0.10;
                    printf("IR...: %5.2f\n\n",ir);
                    getchar();
                }
                else
                    
                    if(salario>9.000){
                        ir=salario*0.15;
                        printf("IR...: %5.2f\n\n",ir);
                        getchar();
                    }
}
