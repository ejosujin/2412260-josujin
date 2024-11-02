#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습1 코드 오류 원인: 가시성 문제: y는 while 루프 내부의 지역변수이므로 루프 외부의 y=4가 있으면 컴파일오류가 발생한다.
int main(void)
{
    int flag = 1;
    int y;
    while (flag != 0)
    {
        y = 3;
        flag = 0;
    }
    y = 4;
    printf("y: %d\n", y);
    return 0;
}
