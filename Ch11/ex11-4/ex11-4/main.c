//
//  main.c
//  ex11-4
//
//  Created by mac on 2019. 11. 11..
//  Copyright © 2019년 size. All rights reserved.
//
//ex11-4
#include <stdio.h>
#define SIZE 10     //SIZE를 10으로 잡아준다.

void array_print(int *A, int size){
    int i;
    printf("A[] = { ");
    for(i=0;i<size;i++){
        A[i] = i+1;
        if(i==size-1)
            printf("%d ",A[i]);
        else
            printf("%d, ",A[i]);
    }
    printf("}\n");
}
int main(void) {
    int A[SIZE];        //크기가 10인 배열A
    array_print(A, SIZE);
    return 0;
}
