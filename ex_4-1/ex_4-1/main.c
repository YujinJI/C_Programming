//
//  main.c
//  ex_4-1
//
//  Created by mac on 2019. 9. 23..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float x;
    printf("실수를 입력하시오: ");
    scanf("%f",&x);
    printf("실수형식으로는 %f입니다\n",x);
    printf("지수형식으로는 %e입니다\n",x);
        return 0;
}
