//
//  main.c
//  ex7-3
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-3
#include <stdio.h>

int main(void) {
    int x;
    int i;

    printf("정수를 입력하시오:");
    scanf("%d",&x);         //정수를 입력받는다.
    printf("약수: ");
    for(i=1;i<=x;i++)
    {
        if(x%i==0){
            printf("%d ",i);    //정수의 약수를 출력한다.
        }
    }
    printf("\n");
    return 0;
}
