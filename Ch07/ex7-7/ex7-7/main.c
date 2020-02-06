//
//  main.c
//  ex7-7
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-7
#include <stdio.h>

int main(void) {
    int n,i;
    
    for(n=2;n<=100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)  //i는n의 약수이다.
            {
                break;
            }
        }
        if(i==n)    //소수이다.
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
