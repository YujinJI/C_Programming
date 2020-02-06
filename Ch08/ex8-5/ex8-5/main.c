//
//  main.c
//  ex8-5
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-5
#include <stdio.h>


double is_round(double f){
    int result;
    
    result = (int)(f+0.5);  //반올림 시키는 방법
    
    printf("반올림한 값은 %d입니다.\n",result);
    
    return 0;
}

int main(void) {
    double n;
    
    printf("실수를 입력하시오:");
    scanf("%lf",&n);        //실수를 입력받는다.
    
    is_round(n);
    
    return 0;
}
