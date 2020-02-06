//
//  main.c
//  ex9-6
//
//  Created by mac on 2019. 11. 4..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int power(int base, int power_raised){
    if(power_raised == 0){
        return 1;
    }
    return base*power(base, power_raised-1);
}


int main(int argc, const char * argv[]) {
    int base, power_raised, result;
    
    printf("밑수: ");
    scanf(" %d", &base);
    printf("지수: ");
    scanf(" %d", &power_raised);
    
    result = power(base, power_raised);
    
    printf("%d^%d = %d\n", base, power_raised, result);
    return 0;
}
