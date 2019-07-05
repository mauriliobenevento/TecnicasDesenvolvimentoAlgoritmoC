//  Algoritmo050
//
//  Tabuada do 1 e 2
//
//  Created by Maurilio Benevento on 04/07/19.
//  Copyright © 2019 Maurilio Benevento. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num1, num2, res;
    
    for(num1=1; num1<=2; num1++)
    {
        for(num2=1; num2<=10; num2++)
        {
            res = num1 * num2;
            printf("%d X %d = %d\n", num1, num2, res);
        }
        
    }
    getchar();
    }
