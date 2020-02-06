//
//  main.c
//  ex6-5
//
//  Created by mac on 2019. 10. 7..
//  Copyright © 2019년 size. All rights reserved.
//
//ex6-5
#include <stdio.h>

int main(void) {
    int height,age;
    
    printf("키를 입력하세요:");    //키를 입력받는다
    scanf("%d",&height);
    
    printf("나이를 입력하세요:");   //나이를 입력받는다
    scanf("%d",&age);
    
    if( height > 140 && age >= 10)
        printf("타도 좋습니다\n");
    else
        printf("죄송합니다\n");
    return 0;
}
