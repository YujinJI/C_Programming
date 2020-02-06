//
//  main.c
//  ex7-9
//
//  Created by mac on 2019. 10. 16..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-9
#include <stdio.h>

int main(void) {
    int sum=0;
    int i=0;
    
    while(sum<=10000)
    {
        i++;
        sum += i;       //sum 에 i를 더해준다.
        
        if(sum>=10000){
        sum -= i;
        i--;     //sum값이 10000이상이면 sum에서 i를 빼주고 i를 감소시킨다.
        break;
        }
    }
    printf("1부터 %d까지의 합은 %d입니다\n",i,sum);
    return 0;
}
