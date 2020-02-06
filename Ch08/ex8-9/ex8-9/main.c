//
//  main.c
//  ex8-9
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-9
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(int num){
    num = rand()%2; //0또는 1을 출력하기위해 rand()%2를 쓴다.
    return num;
}
int main(void) {
    int num=0;
    
    srand((int)time(NULL));
    
    for(int i=1;i<=5;i++)
        printf("%d ",b_rand(num));  //0또는 1을 다섯번 출력한다.
    
    printf("\n");
    return 0;
}
