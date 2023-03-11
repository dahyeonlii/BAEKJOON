/**
 * @file 9498.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 9498 using C++
 * @version 0.1
 * @date 2023-03-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int score;

    cin >> score;
    
    if(score >= 90){
        cout << "A" ;
    }
    else if(score >= 80) {
        cout << "B";
    }
    else if(score >= 70){
        cout << "C";
    }
    else if(score >= 60){
        cout << "D";
    }
    else{
        cout << "F";
    }
    
    return 0;

}

