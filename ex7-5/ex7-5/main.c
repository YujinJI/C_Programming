//
//  main.c
//  ex7-5
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-5
#include <stdio.h>

int main(void) {
    int x,i,j;
    
    printf("정수를 입력하시오: ");
    scanf("%d",&x);         //정수를 입력받는다.
    
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);    //j를 출력해준다.
        }
        printf("\n");
    }
    return 0;
}
