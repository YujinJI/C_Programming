//
//  main.c
//  ex6-2
//
//  Created by mac on 2019. 10. 7..
//  Copyright © 2019년 size. All rights reserved.
//
//ex6-2
#include <stdio.h>

int main(void) {
    int num1,num2;
    
    printf("정수를 입력하세요:");  //num1을 입력받는다.
    scanf("%d",&num1);
    
    printf("정수를 입력하세요:");  //num2를 입력받는다.
    scanf("%d",&num2);
    
    if (num1 % num2 == 0) //(num1 & num2)의 결과가 0이면 num2가 num1의약수이다.
        printf("약수입니다\n");
    else
        printf("약수가 아닙니다\n");
    return 0;
}
