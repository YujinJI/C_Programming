//
//  main.c
//  ex8-1
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-1
#include <stdio.h>

double square(double x){
    
    return x*x;
    
    
}
int main(void) {
    
    double n;
    
    printf("정수를 입력하세요:");
    scanf("%lf",&n);            //n을 입력받는다.
    
    printf("주어진 정수 %lf의 제곱은 %lf입니다\n",n,square(n)); //n의 제곱을 구하기 위해
                                                        //square()에 n을 넣어준다.
    
    return 0;
}
