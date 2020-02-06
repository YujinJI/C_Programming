//
//  main.c
//  ex10-4
//
//  Created by mac on 2019. 11. 8..
//  Copyright © 2019년 size. All rights reserved.
//
//ex10-4
#include <stdio.h>

int array_copy(int a[], int b[], int size)
{
    int i;
    for(i=0;i<10;i++)
    {
        b[i] = a[i];
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ",b[i]); //복사 후 배열b
    printf("\n");
    return 0;
}
int main(void) {
    int a[10] = {1,2,3,0,0,0,0,0,0,0};
    int b[10];      //복사 전 배열b
    
    array_copy(a, b, 10);
    return 0;
}
