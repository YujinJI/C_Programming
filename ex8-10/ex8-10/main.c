//
//  main.c
//  ex8-10
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int b_rand(){
    int random_num;
    srand((int)time(NULL));
    random_num = rand() % 2;    //0또는1을 나타내기 위해 rand()%2를 쓴다.
    
    return random_num;
}

int main(void) {
    int user_input;
    char user;
    
    
    while (1) {
        int com_num;
        com_num = b_rand();
        
        printf("앞면 또는 뒷면(1 또는 0): ");
        scanf("%d", &user_input);
        
        if(user_input == com_num)
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");
        
        printf("계속하시겠습니다?(y 또는 n): ");
        scanf("%c", &user);
        
        if(user == 'n')
            break;   //n이 입력되면 종료한다.
    }
    
    return 0;
}

