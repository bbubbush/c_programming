#include <stdio.h>

void main(){

    int nData1 = 1234, nData2 = -4567;

    printf("%d\n", nData1);
    printf("%+d, %+d\n", nData1, nData2);   // 기호를 붙여서 출력한다.

    printf("%07d\n", nData1);   // 전체 자릿수는 7자리가 되고, 오른쪽 정렬을 하고 빈칸은 0으로 채운다
    printf("%7d\n", nData1);    // 전체 자릿수는 7자리, 오른쪽 정렬
    printf("%-7d\n", nData1);   // 전체 자릿수는 7자리, 왼쪽 정렬
}