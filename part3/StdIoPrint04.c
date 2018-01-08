#include <stdio.h>

void main(){

    float fData = 123.456f;

    printf("%f\n", fData);
    printf("%.1f\n", fData);
    printf("%.2f\n", fData);
    printf("%.3f\n\n", fData);

    printf("%e\n", fData);
    printf("%g\n", fData);  // %g는 %e와 %f중 출력값이 짧은 놈을 리턴함

}