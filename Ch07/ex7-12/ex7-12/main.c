//
//  main.c
//  ex7-12
//
//  Created by mac on 2019. 10. 16..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-12
#include <stdio.h>

int main(void) {
    int a=0,b=1,c,n,i;
    
    printf("몇번째 항까지 구할까요? ");
    scanf("%d",&n);         //n을 입력받는다.
    
    for(i=0;i<=n;i++)
    {
        printf("%d ",a);    //a를 출력한다.
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
