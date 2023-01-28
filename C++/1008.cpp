/**
 * @file 1008.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 1008 using C++
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    double A, B;

    cin >> A;
    cin >> B;

    //소수점 자릿수 고정
    cout.precision(9);
    //고정 소수점 표기로 전환
    cout << fixed;

    cout << A/B;

    return 0;
}