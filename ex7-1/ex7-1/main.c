//
//  main.c
//  ex7-1
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-1
#include <stdio.h>

int main(void) {
    int x;
    int i;
    printf("카운터의 초기값을 입력하시오:");
    scanf("%d",&x);     //카운터의 초기값을 입력받는다.
    
    for(i=x;i>=1;i--)   //i를 x부터 1까지 1씩 감소시킨다.
        printf("%d ",i);
        printf("\n");
    
    return 0;
}
