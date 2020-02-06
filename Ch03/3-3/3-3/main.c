//
//  main.c
//  3-3
//
//  Created by mac on 2019. 9. 16..
//  Copyright © 2019년 size. All rights reserved.
//
// 삼각형의 밑변,높이를 입력받아 넓이 출력하기
#include <stdio.h>

int main(void) {
    float base;
    float height;
    float area;
    
    printf("삼각형의 밑변: ");
    scanf("%f",&base);      //밑변을 입력받아 base에 저장
    
    printf("삼각형의 높이: ");
    scanf("%f",&height);    //높이를 입력받아 height에 저장
    
    area = 0.5 * height * base; //넓이를 계산
    
    printf("삼각형의 넓이: %f\n",area);     //넓이를 출력
    
    return 0;
}
