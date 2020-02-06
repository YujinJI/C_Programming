//
//  main.c
//  3-6
//
//  Created by mac on 2019. 9. 16..
//  Copyright © 2019년 size. All rights reserved.
//
//몸무게를 입력받아 달에서의 몸무게 출력
#include <stdio.h>

int main(void) {
    
    float weight_on_moon;
    float weight_on_earth;
    
    printf("몸무게를 입력하세요(단위:kg): ");
    scanf("%f",&weight_on_earth);       //몸무게를 입력받아 weight_on_earth에 저장
    
    weight_on_moon = weight_on_earth * 0.17;    //달에서의 몸무게 계산
    
    printf("달에서의 몸무게는 %fkg입니다.\n",weight_on_moon);  //달에서의 몸무게 출력
    return 0;
}
