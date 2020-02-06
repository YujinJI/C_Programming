//
//  main.c
//  ex11-2
//
//  Created by mac on 2019. 11. 11..
//  Copyright © 2019년 size. All rights reserved.
//
//ex11-2
#include <stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff){   //포인터를 통하여 값들을 반환
    *p_sum = x + y;
    
    *p_diff = x - y;
}
int main(void) {
    int sum,diff;
    get_sum_diff(100, 200, &sum, &diff);    //변수의 주소가 전달된다
    printf("원소들의 합: %d\n",sum);
    printf("원소들의 차: %d\n",diff);
    return 0;
}
