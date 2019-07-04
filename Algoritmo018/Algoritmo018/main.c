//  Algoritmo018
//
//  Lê duas variáveis e verifica qual a maior entre elas.
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

 #include <stdio.h>
 
 int main()
 {
 int a, b;
 
 printf ("Qual o valor de A..: "); scanf("%d", &a);
 printf ("Qual o valor de B..: "); scanf("%d", &b);
 
 if (a>b)
 printf ("\n\nA e maior que B\n\n");
 else
 printf ("\n\nB e maior que A\n\n");
     
 getchar();
 }
 
