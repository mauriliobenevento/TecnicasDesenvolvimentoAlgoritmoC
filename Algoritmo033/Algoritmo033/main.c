//  Algoritmo033
//
//  Ler salario e calcular a Folha conforme o Enunciado
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

/*
 Enunciado:
 1) Adiantamento quinzenal 20%
 2) Transporte 4%
 3) Ticket alimentação 3.5%
 4) INSS 11%
 5) Salários acima de 9.000 15% IR
 6) Considerar faltas no mês
 Demonstrar um quadro com Proventos / Descontos / Totais e Valor liquido a receber
 */

#include <stdio.h>

int main(void)
{
    //descontos
    float ir_renda,ad_quinzenal,va_trnp,ti_rest,inss,
    va_faltas,va_falta_dia,salario,to_desc,va_liquido=0;
    
    int   qt_faltas;
    
    //trata salário acima de 9.000
    printf("Qual o salario? ");
    scanf("%f",&salario);
    
    printf("\n\nQtde de faltas [0 caso não tenha]: ");
    scanf("%i",&qt_faltas);
    va_falta_dia = salario/30;
    
    // verifica se salário é maior que 9.000
    if(salario>9000)
        ir_renda=salario*0.15;
    
    // demais descontos
    ad_quinzenal=salario*0.20;
    va_trnp=salario*0.04;
    ti_rest=salario*0.035;
    inss=salario*0.11;
    va_faltas=qt_faltas*va_falta_dia;
    
    //soma dos descontos
    to_desc = ad_quinzenal + va_trnp + ti_rest + inss +
    va_faltas;
    
    printf("\n\nProventos...: %.2f ",salario);
    
    printf("\n\n**** Quadro de Descontos *****\n");
    printf(" 1. Adiantamento quinzenal...: %.2f\n ",ad_quinzenal);
    printf("2. Vale Transporte..........: %.2f\n ",va_trnp);
    printf("3. Ticket Restaurante.......: %.2f\n ",ti_rest);
    printf("4. INSS.....................: %.2f\n ",inss);
    printf("5. Faltas...................: %.2f\n ",va_faltas);
    printf("6. Imposto de Renda.........: %.2f\n ",ir_renda);
    printf("7. Total Descontos..........: %.2f\n ",to_desc);
    
    // Valor liquido
    va_liquido=salario-to_desc;
    
    printf("\n\n**** Líquido à Receber *****\n");
    printf("Valor liquido a receber...: %.2f\n ",va_liquido);
    
    getchar();
}



