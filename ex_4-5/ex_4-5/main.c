//
//  main.c
//  ex_4-5
//
//  Created by mac on 2019. 9. 23..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int main(void) {
    const double SQMETTER_PER_PYEONG = 3.3058;
    double x,area;
    printf("평을 입력하세요:");
    scanf("%lf",&x);
    area = x * SQMETTER_PER_PYEONG;
    printf("%lf평당미터 입니다.\n",area);
    return 0;
}
