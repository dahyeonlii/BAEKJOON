/**
 * @file 10430.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 10430 using C++
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int A, B, C;

    cin >> A >> B >> C;

    cout << (A+B)%C << endl;
    cout << ((A%C)+(B%C))%C << endl;
    cout << (A*B)%C << endl;
    cout << ((A%C)*(B%C))%C;

    return 0;
    
}
