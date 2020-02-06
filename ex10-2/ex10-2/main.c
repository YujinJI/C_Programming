//
//  main.c
//  ex10-2
//
//  Created by mac on 2019. 11. 8..
//  Copyright © 2019년 size. All rights reserved.
//
//ex10-2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(void) {
    
    int x[SIZE] = { 0 };    //1차원 배열을 선언하고 0으로 초기화한다.
    int i, max, min;
    
    srand((unsigned)time(NULL));
    for(i=0;i<SIZE;i++)
        x[i] = (rand()%100000)+1;
        

    max = x[0]; //첫번째 배열 요소를 최대값으로 가정
    min = x[0]; //첫번째 배열 요소를 최소값으로 가정
    for(i=1;i<SIZE;i++)
    {
        if(x[i]>max)
            max = x[i];
        else if(x[i]<min)
            min = x[i];
    }
    printf("최댓값은 %d\n",max);
    printf("최솟값은 %d\n",min);
    return 0;
}
