//
//  main.c
//  ex9-5
//
//  Created by mac on 2019. 11. 4..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int recursive(int input){
    if(input<=0)
        return 0;
    return input + recursive(input-1);
}

int main(void) {
    int input, result=0;
    
    printf("정수를 입력하시오: ");
    scanf(" %d", &input);
    
    result = recursive(input);
    
    printf("1부터 %d까지의 합: %d\n", input, result);
    
    return 0;
}
