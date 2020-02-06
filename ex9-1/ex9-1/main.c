//
//  main.c
//  ex9-1
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex9-1
//#include <stdio.h>
//int add(int x,int y)
//{
//    static int count=0;     //정적 지역 변수는 static int count;와 같이 선언한다.
//    count++;
//    printf("덧셈은 총 %d번 실행되었습니다\n",count);
//    return x+y;
//}
//int sup(int x,int y)
//{
//    static int count=0;
//    count++;
//    printf("뺄셈은 총 %d번 실행되었습니다\n",count);
//    return x-y;
//}
//int mul(int x,int y)
//{
//    static int count=0;
//    count++;
//    printf("곱셈은 총 %d번 실행되었습니다\n",count);
//    return x*y;
//}
//int dvd(int x,int y)
//{
//    static int count=0;
//    count++;
//    printf("덧셈은 총 %d번 실행되었습니다\n",count);
//    return x/y;
//}
//int main(void) {
//    int n1,n2;
//    char op;
//
//    while(1)
//    {
//        printf("연산을 입력하세요:");
//        scanf("%d %c %d",&n1,&op,&n2);  //연산을 입력받는다.
//
//        switch(op)
//        {
//            case'+':
//                printf("연산결과: %d\n",add(n1,n2));
//                break;
//            case'-':
//                printf("연산결과: %d\n",sup(n1,n2));
//                break;
//            case'*':
//                printf("연산결과: %d\n",mul(n1,n2));
//                break;
//            case'/':
//                printf("연산결과: %d\n",dvd(n1,n2));
//                break;
//        }
//    }
//}
//ex9-1(b)
#include <stdio.h>

static int count_add=0;
static int count_sub=0;
static int count_mul=0;
static int count_dvd=0;
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int dvd(int x,int y);

int main()
{
    int n1, n2;
    char op;

    while(1)    //반복문을 실행한다.
    {
        printf("연산을 입력하시오: ");
        scanf("%d %c %d", &n1, &op, &n2);   //연산을 입력받는다.
        switch(op)
        {
            case '+' : printf("연산 결과: %d\n", add(n1, n2)); break;
            case '-' : printf("연산 결과: %d\n", sub(n1, n2)); break;
            case '*' : printf("연산 결과: %d\n", mul(n1, n2)); break;
            case '/' : printf("연산 결과: %d\n", dvd(n1, n2)); break;
        }
    }
}
int add(int x, int y)
{
    count_add++;
    printf("덧셈은 총 %d번 실행되었습니다\n", count_add);
    return x+y;
}
int sub(int x, int y)
{
    count_sub++;
    printf("뺄셈은 총 %d번 실행되었습니다\n", count_sub);
    return x-y;
}
int mul(int x, int y)
{
    count_mul++;
    printf("곱셈은 총 %d번 실행되었습니다\n", count_mul);
    return x*y;
}
int dvd(int x, int y)
{
    count_dvd++;
    printf("나눗셈셈은 총 %d번 실행되었습니다\n", count_dvd);
    return x/y;
}
