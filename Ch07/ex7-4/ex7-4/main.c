//
//  main.c
//  ex7-4
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-4
#include <stdio.h>

int main(void) {
    int x,i,j;
    
    for(i=1;i<=7;i++)
    {
        for(x=6;x>=i;x--){
            printf(" ");        //공백을 넣어준다.
        }
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");       //줄바꿈을 해준다.
    }
    return 0;
}
