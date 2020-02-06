//
//  main.c
//  ex_4-2
//
//  Created by mac on 2019. 9. 23..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int x;
    printf("16진수 정수를 입력하세요:");
    scanf("%x",&x);
    printf("8진수로는 %#o 입니다\n",x);
    printf("10진수로는 %d 입니다\n",x);
    printf("16진수로는 %#x 입니다\n",x);
    return 0;
}
