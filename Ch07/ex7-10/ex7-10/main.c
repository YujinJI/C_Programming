//
//  main.c
//  ex7-10
//
//  Created by mac on 2019. 10. 16..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-10
#include <stdio.h>

int main(void) {
    float r;
    int i,n;
    double result=1.0;
    printf("실수의 값을 입력하시오: ");
    scanf("%f",&r);                 //실수값을 입력받는다.
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d",&n);                 //거듭제곱횟수를 입력받는다.
    for(i=1;i<=n;i++)
    {
        result = result * r;        //r^n을 계산해준다.
    }
    printf("결과값은 %f입니다\n",result);
    return 0;
}
