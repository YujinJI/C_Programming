//
//  main.c
//  ex11-3
//
//  Created by mac on 2019. 11. 11..
//  Copyright © 2019년 size. All rights reserved.
//
//ex11-3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10     //SIZE는 10으로 잡아준다

void array_fill(int *A, int size)
{
    int i;
    for(i=0;i<size;i++){
        A[i] = rand()%10000;    //난수생성
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main(void) {
    srand((unsigned)time(NULL));
    
    int A[SIZE];
    array_fill(A,SIZE);
    return 0;
}
