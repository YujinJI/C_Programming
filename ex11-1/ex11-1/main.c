//
//  main.c
//  ex11-1
//
//  Created by mac on 2019. 11. 11..
//  Copyright © 2019년 size. All rights reserved.
//
//ex11-1
//컴퓨터 메모리에 바이트를 배열하는 방법
#include <stdio.h>

int main(void) {
    int x = 0x12345678;
    unsigned char *xp = (char *)&x;
    
    printf("바이트순서: %x %x %x %x\n",xp[0],xp[1],xp[2],xp[3]);
    return 0;
}
// 인텔 CPU는 리틀 엔디언이다.
