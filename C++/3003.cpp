/**
 * @file 3003.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 3003 using C++
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int num[6] = {1, 1, 2, 2, 2, 8};
    int input;

    for(int i=0; i<6; i++){
        cin >> input;
        cout << num[i]-input <<" ";
    }

    return 0;  

}