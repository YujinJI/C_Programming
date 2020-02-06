//
//  main.c
//  ex8-6
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-6
#include <stdio.h>

int even(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}
int absolute(int n){
    if(n>0)
        return 1;
    else
        return -1;
}
int sign(int n){
    if(n<0)
        return -1;
    else if(n>0)
        return 1;
    else
        return 0;
}
int main(void) {
    int n;
    
    printf("정수를 입력하세요:");
    scanf("%d",&n);         //정수를 입력받는다.
    
    if(even(n)==1)
        printf("even()의 결과: 짝수\n");
    else if(even(n)==0)
        printf("even()의 결과: 홀수\n");
    if(absolute(n)==1)
       printf("absolute()의 결과: %d\n",n);
    else if(absolute(n)==-1)
       printf("absolute()의 결과: %d\n",n*(-1));   //절댓값을 출력해주기 위해 -1을 곱해준다.
    if(sign(n)==-1)
        printf("sign()의 결과: 음수\n");
    else if(sign(n)==1)
        printf("sign()의 결과: 양수\n");
    else if(sign(n)==0)
        printf("sign()의 결과: 0\n");
    return 0;
}
