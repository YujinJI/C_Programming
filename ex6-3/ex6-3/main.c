//
//  main.c
//  ex6-3
//
//  Created by mac on 2019. 10. 7..
//  Copyright © 2019년 size. All rights reserved.
//
//ex6-3
#include <stdio.h>

int main(void) {
    int a,b,c;
    
    printf("3개의 정수를 입력하세요:");
    scanf("%d %d %d",&a,&b,&c);     //3개의 정수 a,b,c를 입력받는다.
    
    if ((a<b) && (a<c))         //비교를 통해 가장 작은 정수를 찾는다.
        printf("가장 작은 정수는 %d입니다\n",a);
    else if ((b<a) && (b<c))
        printf("가장 작은 정수는 %d입니다\n",b);
    else
        printf("가장 작은 정수는 %d입니다\n",c);
    return 0;
}
