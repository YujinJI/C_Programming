//
//  main.c
//  ex6-4
//
//  Created by mac on 2019. 10. 7..
//  Copyright © 2019년 size. All rights reserved.
//
//ex6-4
#include <stdio.h>
#include <stdlib.h>  //rand함수는 stdlib.h파일에 포함되어 있음.
int main(void) {
    int a;
    int random = (rand()%3 + 1);  //1~3사이 랜덤난수 생성
    printf("선택하시오(1:가위 2:바위 3:보):");
    scanf("%d",&a);
    
    if (a == random)
        printf("비겼음\n");
    else if (a == 1 && random == 2)
        printf("컴퓨터가 이겼음\n");
    else if (a == 1 && random == 3)
        printf("사용자가 이겼음\n");
    else if (a == 2 && random == 1)
        printf("사용자가 이겼음\n");
    else if (a == 2 && random == 3)
        printf("컴퓨터가 이겼음\n");
    else if (a == 3 && random == 1)
        printf("컴퓨터가 이겼음\n");
    else
        printf("사용자가 이겼음\n");
        
    
    return 0;
}
