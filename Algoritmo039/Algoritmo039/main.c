//  Algoritmo039
//
// Um exemplo de operador logico na mesma linha
// 10>5 && !(10<9) || 3<=4) isso é verdadeiro ou falso? 
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    printf("10>5 && !(10<9) || 3<=4 && 5<2 && !(11>7)");
    
    //if (10>5 && !(10<9) || 3<=4){
    if (10>5 && !(10<9) || 3<=4 && 5<2 && !(11>7))
        printf("\n\nVerdade");
    else
        printf("\n\nFalso");
    getchar();
}
