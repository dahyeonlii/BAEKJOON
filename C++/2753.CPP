/**
 * @file 2753.CPP
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 2753 using C++
 * @version 0.1
 * @date 2023-06-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int year;
    cin >> year;

    if (year % 4 == 0 ){
        if(year % 100 == 0 && year % 400 != 0){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    else{
        cout << 0;
    }

    return 0;

}