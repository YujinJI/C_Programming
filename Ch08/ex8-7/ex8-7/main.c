//
//  main.c
//  ex8-7
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-7
#include <stdio.h>

int get_tax(int income){
    int result;
    
    if(income>1000)     //소득이 1000이상일때 result값을 결정해준다.
        result = 80 + (income - 1000) * 0.1;
    else
        result = income*0.8;
    
        
    return result;
}
int main(void) {
    int n;
    
    printf("소득을 입력하세요(만원):");
    scanf("%d",&n);         //소득을 입력받는다.
    
    printf("소득세는 %d입니다\n",get_tax(n));
    return 0;
}
