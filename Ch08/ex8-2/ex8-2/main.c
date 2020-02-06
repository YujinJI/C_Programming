//
//  main.c
//  ex8-2
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-2
#include <stdio.h>

char check_alpha(char ch){
    if(ch >= 97 && ch <= 122){      //ch가 97이상 122이하면 소문자이다.
        printf("%c는 알파벳 문자입니다\n",ch);
    }
    else
        printf("%c는 알파벳 문자가 아닙니다\n",ch);
    
    return 0;
}
int main(void) {
    
    char a;
    
    printf("문자를 입력하세요:");
    scanf("%c",&a);             //문자를 입력받는다.
    
    check_alpha(a);
    return 0;
}
