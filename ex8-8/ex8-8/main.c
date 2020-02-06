//
//  main.c
//  ex8-8
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-8
#include <stdio.h>
#include <math.h>

double sin_degree(double degree){
    double result;
    
    result = sin((3.141592*degree)/180.0);  //라디안을 각도로 바꿔준다.
    return result;
}
int main(void) {
    int n;
    
    for(n=0;n<=180;n+=10)   //0도부터 180도까지 반복하여 출력한다.
        printf("sin(%d)의 값은 %lf\n",n,sin_degree(n));
    return 0;
}
