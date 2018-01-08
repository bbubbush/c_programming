#include <stdio.h>
#include <conio.h>  // getch, getche는 여기에 선언되어있음

void main(){
    char ch;

    // 이 둘은 buffer를 거치지 않고 키보드가 입력하면 바로 반응한다. 따라서 엔터키로 구분지어 줄 필요가 없다.(\n을 기다리지 않는다)
    ch = getch();   // 입력한 문자가 화면에 남지 않음
    printf("%c\n", ch);

    ch = getche();  // 입력한 문자가 화면에 남음  마지막 e는 echo의 의미
    printf("%c\n", ch);

}