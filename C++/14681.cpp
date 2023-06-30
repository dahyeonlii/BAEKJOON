/**
 * @file 14681.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 14681 using C++
 * @version 0.1
 * @date 2023-06-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int x, y;

    cin >> x >> y;

    if(x > 0 && y > 0){
        cout << 1;
    }
    else if(x < 0 && y > 0){
        cout << 2;
    }
    else if(x < 0 && y < 0){
        cout << 3;
    }
    else if(x > 0 && y <0){
        cout << 4;
    }
    
    return 0;

}