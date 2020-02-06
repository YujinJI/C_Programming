//
//  main.c
//  ex8-4
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-4
#include <stdio.h>

int is_leap(int year){
    
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf("%d년은 366일 입니다\n",year);     //윤년은 366일이다.
    
    else
        printf("%d년은 365일 입니다\n",year);
    
    return 0;
}
int main(void) {
    int n;
    
    printf("연도를 입력하세요:");
    scanf("%d",&n);             //연도를 입력받는다.
    
    is_leap(n);
    return 0;
}
