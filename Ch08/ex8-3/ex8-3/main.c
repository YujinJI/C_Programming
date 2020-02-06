//
//  main.c
//  ex8-3
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-3
#include <stdio.h>
#define pi 3.141592
double cal_area(double radius){
    
    return radius * radius * pi;    //면적 = 반지름 * 반지름 * 원주율
    
}

int main(void) {
    double r;
    
    printf("원의 반지름을 입력하세요:");
    scanf("%lf",&r);            //반지름을 입력받는다.
    
    
    printf("원의 면적은 %lf입니다\n",cal_area(r));
    
    return 0;
}
