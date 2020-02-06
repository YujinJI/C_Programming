//
//  main.c
//  ex10-6
//
//  Created by mac on 2019. 11. 8..
//  Copyright © 2019년 size. All rights reserved.
//
//ex10-6
#include <stdio.h>

int main(void) {
    int num[3][5]={12,56,32,16,98,99,56,34,41,3,65,3,87,78,21};
    int a,b;
    int hang=0,jul=0;
    
    for(a=0;a<3;a++)
    {
        jul=0;
        for(b=0;b<5;b++)
        {
            jul+=num[a][b];
        }
        printf("%d 행의 합계 %d\n",a,jul);
    }
    for(a=0;a<5;a++)
    {
        hang=0;
        for(b=0;b<3;b++)
        {
            hang+=num[b][a];
            
        }
        printf("%d 열의 합계:%d\n",a,hang);
    }
    return 0;
}

