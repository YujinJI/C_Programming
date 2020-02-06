//
//  main.c
//  3-4
//
//  Created by mac on 2019. 9. 16..
//  Copyright © 2019년 size. All rights reserved.
//
// 화씨온도를 입력받아 섭씨온도로 변환
#include <stdio.h>

int main(void) {
    double f;
    double c;
    
    printf("화씨값을 입력하시오: ");
    scanf("%lf",&f);     //화씨값을 입력받아 f에 저장
    
    c = (5.0/9.0)*(f-32.0);   //화씨온도를 섭씨온도로 변환
    
    printf("섭씨값은 %lf도 입니다.\n",c);      //섭씨온도 출력
    return 0;
}
