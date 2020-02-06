//
//  main.c
//  ex7-8
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-8
#include <stdio.h>

int main(void) {
    int n = 0,i;
    
    while(n != -1)
    {
        printf("막대의 높이 (종료:-1):");
        scanf("%d",&n);     //막대의 높이를 입력받는다.
        
        for(i=1;i<=n;i++)
        printf("*");        //*을 n개만큼 출력한다
        printf("\n");
    }
    return 0;
}
