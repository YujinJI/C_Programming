//
//  main.c
//  ex11-6
//
//  Created by mac on 2019. 11. 11..
//  Copyright © 2019년 size. All rights reserved.
//
//ex11-6
#include <stdio.h>
#define SIZE 10
void array_copy(int *A, int *B, int size)
{
    int i;
    printf("A[] = ");     //A배열을 출력한다.
    for(i=0;i<size;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("B[] = ");
    for(i=0;i<size;i++){
        B[i]=A[i];      //A를 B에 복사한다.
        printf("%d ",B[i]);     //B배열을 출력한다.
    }
    printf("\n");
}

int main(void) {
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int B[SIZE];
    
    array_copy(A,B,SIZE);
    return 0;
}
