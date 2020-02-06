//
//  main.c
//  ex9-3
//
//  Created by mac on 2019. 11. 4..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>
static int count=0;
int pwdCheck(int pwd);
int main(void)
{
    int pwd3;
    int boolean;
    while(count!=3)
    {
        
        printf("비밀번호: ");
        scanf("%d", &pwd3);
        boolean = pwdCheck(pwd3);
        if(boolean == 1)
            printf("로그인 성공");
        else if(count == 3)
            printf("로그인 시도횟수 초과\n");
        
        
    }
    return 0;
}
int pwdCheck(int pwd)
{
    int pwd2=1234;
    if(pwd == pwd2)
        return 1;
    else{
        count++;
        return 2;
    }
}



