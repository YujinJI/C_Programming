//
//  main.c
//  ex_4-7
//
//  Created by mac on 2019. 9. 23..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int main(void) {
    double m,v,e;
    printf("질량(kg):");
    scanf("%lf",&m);
    
    printf("속도(m/s):");
    scanf("%lf",&v);
    
    e = m*(v*v)/2.0;
    printf("운동에너지(j):%lf\n",e);
    
    
    
    
    return 0;
}
