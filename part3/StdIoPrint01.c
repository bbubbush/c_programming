#include <stdio.h>

void main(){

    int nData = 0x41;

    printf("%d\n", nData);
    printf("%X\n", nData);

    printf("%c\n", nData);
    printf("%c\n", nData + 1);
    printf("%c\n", 'A' + 2);
    printf("%c\n", 'A' + 3);

    printf("%s, %d\n", "HelloWorld", 10);
}