//
//  main.c
//  ex7-2
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-2
#include <stdio.h>

int main(void) {
    int sum=0;
    int i;
    
    for(i=1;i<=100;i++)     //1부터 100까지 1씩 더해준다.
    {
        if(i%3==0)          //3의 배수만 더해주기위해 if문을 쓴다
            sum += i;
    }
    
    printf("1부터100사이의 모든 3의 배수의 합은 %d입니다\n",sum);
    
    return 0;
}
