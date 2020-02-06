//
//  main.c
//  ex7-6
//
//  Created by mac on 2019. 10. 15..
//  Copyright © 2019년 size. All rights reserved.
//
//ex7-6
#include <stdio.h>

int main(void) {
    char op;
    int x,y;
    int quit = 0;
    
    do
    {
        printf("***************\n");
        printf("A— Add\n");
        printf("S— Subtract\n");
        printf("M— Multiply\n");
        printf("D— Divide\n");
        printf("Q— Quit\n");
        printf("***************\n");
        printf("연산을 입력하세요 :");
        scanf("%c",&op);            //연산을 입력받는다.
        
        if(op =='Q' || op == 'q'){               //Q를 입력받으면 종료한다.
            quit = 1;
        }
        
        if(op == 'A' || op == 'a' ) {
            printf("두 수를 공백으로 분리하여 입력하세요: ");
            scanf("%d %d",&x,&y);       //두 수를 입력받는다.
            printf("%d\n",x+y);
        }
        else if(op == 'S' || op == 's' ){
            printf("두 수를 공백으로 분리하여 입력하세요: ");
            scanf("%d %d",&x,&y);       //두 수를 입력받는다.
            printf("%d\n",x-y);
        }
        else if(op == 'M'  || op == 'm' ){
            printf("두 수를 공백으로 분리하여 입력하세요: ");
            scanf("%d %d",&x,&y);       //두 수를 입력받는다.
            printf("%d\n",x*y);
        }
        else if(op == 'D' || op == 'd' ){
            printf("두 수를 공백으로 분리하여 입력하세요: ");
            scanf("%d %d",&x,&y);       //두 수를 입력받는다.
            printf("%d\n",x/y);
        }
        else
            printf("Reenter please");
        
    } while( quit == 0 );
}
