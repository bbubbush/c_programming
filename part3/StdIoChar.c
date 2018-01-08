#include <stdio.h>

void main(){
    char ch;
    ch = getchar(); // 최초로 사용자에게 입력을 받음
    putchar(ch);    // buffer에 남아있은 문자 하나를 리턴
    ch = getchar(); // 이미 buffer에 데이터가 남아있으므로 입력받지 않음
    putchar(ch);    // buffer에 남아있은 문자 하나를 리턴
    ch = getchar(); // 이미 buffer에 데이터가 남아있으므로 입력받지 않음
    putchar(ch);    // buffer에 남아있은 문자 하나를 리턴


    /* 
    만약 입력받은 글자가 한글자라면  한번 더 입력을 해주어야 한다. 
    내가 TE 라는 문자를 입력하면 엔터값인 \n 값도 함꼐 buffer에 저장이 되어 결과적으로 3개의 문자가 입력이 된다.
    또한 모든 문자열의 끝은 null, 즉 0으로 끝난다는 사실도 알고 있어야 한다.
    */
}