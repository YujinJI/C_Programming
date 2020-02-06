//
//  main.c
//  3-2
//
//  Created by mac on 2019. 9. 16..
//  Copyright © 2019년 size. All rights reserved.
//
// 마일값을 입력받아 미터로 변환하기
#include <stdio.h>

int main(void) {
    
    float mile;
    float meter;
    
    printf("마일을 입력하시오: ");      //마일을 입력
    scanf("%f",&mile);              //입력값을 마일에 저장
    
    meter = 1609.0 * mile;      //마일을 미터로 변환하는 계산
    
    printf("%.1f마일은 %f미터 입니다.\n",mile,meter);   //출력
    return 0;
}
