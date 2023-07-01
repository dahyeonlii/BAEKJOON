/**
 * @file 2884.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 2884 using C++
 * @version 0.1
 * @date 2023-07-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int h, m;
    cin >> h >> m;

    //45분 전이 0 보다 작을 경우 시간 -1
    if ((m-45) < 0){
        if(h == 0){
            h = 23;
        }else{
            h = h-1;
        }
        // 45분 전이 0 보다 작을 경우 -45 + 60
        m = m + 15;

    }else{
        m = m - 45;
    }

    cout << h << " " << m << endl;

    return 0;
}