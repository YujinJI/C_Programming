//
//  main.c
//  ex_4-4
//
//  Created by mac on 2019. 9. 23..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int main(void) {
    double w,h,d,v;
    printf("상자의 가로 세로 높이를 한번에 입력:");
    scanf("%lf %lf %lf",&w,&h,&d);
    v = w * h * d;
    printf("상자의 부피는 %lf입니다\n",v);

    return 0;
}
