//
//  main.c
//  ex7-11
//
//  Created by mac on 2019. 10. 16..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-11
#include <stdio.h>

int main(void) {
    int n,i,result=0;
    
    printf("n의 값을 입력하시오: ");
    scanf("%d",&n);             //n의 값을 입력받는다.
    
    for(i=1;i<=n;i++)
    {
        result = result + i * i;    //i^2를 1부터 n까지 더해준다.
    }
    printf("계산값은 %d입니다\n",result);
    return 0;
}
