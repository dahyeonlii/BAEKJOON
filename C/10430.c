/**
 * @file 10430.c
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 10430 using C
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <stdio.h>

int main(){

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    
    printf("%d\n", (A+B)%C);
    printf("%d\n", ((A%C)+(B%C))%C);
    printf("%d\n", (A*B)%C);
    printf("%d", ((A%C)*(B%C))%C);

    return 0;
}