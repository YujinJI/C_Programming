//
//  main.c
//  ex10-1
//
//  Created by mac on 2019. 11. 8..
//  Copyright © 2019년 size. All rights reserved.
//
//ex10-1
#include <stdio.h>

int main(void) {
    
    int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    
    for(int i =0;i<12;i++)  //첫번째 배열은 days[0]이기 때문에 i의 초기값은 0으로 해준다.
        printf("%d월은 %d일까지 있습니다.\n",i+1,days[i]);
        //i의 초기값은 0이기 때문에 i+1을 해준다.
    return 0;
}
