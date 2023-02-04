/**
 * @file 3003.c
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 18108 using C
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <stdio.h>

int main(){

    int num[6] = {1, 1, 2, 2, 2, 8};
    int input;

    for(int i=0; i<6; i++){
        scanf("%d", &input);
        printf("%d ", num[i] - input);
    } 

    return 0;

}