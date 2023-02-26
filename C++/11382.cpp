/**
 * @file 11382.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 10430 using C++
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){

    long a, b, c;
    string input;  

    //공백 포함 문자열 입력
    getline(cin, input);
   
   //공백 기준 문자열 분리
    stringstream str(input);
    str >> a >> b >> c;
    
    cout << a+b+c;

    return 0;
    
}


