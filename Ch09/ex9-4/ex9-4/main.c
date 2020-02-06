//
//  main.c
//  ex9-4
//
//  Created by mac on 2019. 11. 4..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(void);

int main()
{
    printf("%d\n", get_random());
    printf("%d\n", get_random());
    printf("%d\n", get_random());
}
int get_random()
{
    static int inited=0;
    
    if(inited==0)
    {
        printf("초기화 실행\n");
        srand((unsigned)time(NULL));
        inited=1;
    }
    return rand();
}

