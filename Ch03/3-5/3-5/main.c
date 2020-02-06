//
//  main.c
//  3-5
//
//  Created by mac on 2019. 9. 16..
//  Copyright © 2019년 size. All rights reserved.
//
// 다항식 계산하는 프로그램
#include <stdio.h>

int main(void) {
    float x;
    float answer;
    
    printf("실수를 입력하시오: ");
    scanf("%f",&x);     //실수를 입력받아 x에 저장
    
    answer = (3*x*x) + (7*x) + 11;  //다항식 계산
    
    printf("다항식의 값은 %f\n",answer);    //다항식 계산한 값 출력
    return 0;
}

