#include <stdio.h>

void main(){

    char *pszData = "Test string!";

    printf("%s\n", pszData);
    printf("%p\n", pszData);
    printf("%p\n", &pszData);

}