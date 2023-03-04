/**
 * @file 1330.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 1330 using C++
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int A, B;
    cin >> A >> B;

    if (A > B){
        cout << ">" ;
    }
    else if (A < B){
        cout << "<";
    }
    else if (A == B){
        cout << "==";
    }
    
    return 0;

}

