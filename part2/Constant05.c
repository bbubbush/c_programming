#include <stdio.h>

void main(){

    double dblData = 123.45;
    float flData = -123.45f;

    printf("%d\n", sizeof(123.45)); // sizeof = 메모리 사용량을 이야기함  6 -> 6byte
    printf("%d\n", sizeof(123.45f));
}