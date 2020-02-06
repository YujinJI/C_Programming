//
//  main.c
//  ex6-1
//
//  Created by mac on 2019. 10. 7..
//  Copyright © 2019년 size. All rights reserved.
//
//ex6-1
#include <stdio.h>

int main(void) {
    char ch;
    
    printf("문자를 입력하세요:"); //문자를 입력받는다
    scanf("%c",&ch);
    
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("모음입니다\n");
            break;
        default:   //자음은 많기때문에 default문을 이용한다
            printf("자음입니다\n");
            break;
    }
    return 0;
}
