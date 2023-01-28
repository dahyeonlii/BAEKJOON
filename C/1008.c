#include <stdio.h>

int main(){

    double A, B;

    //소수점 default 6자리까지 출력
    scanf("%lf %lf", &A, &B);

    //소수점 9자리까지 출력
    printf("%.9lf", A/B);

    return 0;

}