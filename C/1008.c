/**
 * @file 1008.c
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 1008 using C
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <stdio.h>

int main(){

    double A, B;

    //소수점 default 6자리까지 출력
    scanf("%lf %lf", &A, &B);

    //소수점 9자리까지 출력
    printf("%.9lf", A/B);

    return 0;

}