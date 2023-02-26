/**
 * @file 2588.cpp
 * @author Dahyeon Lee (https://github.com/dahyeonlii)
 * @brief BAEKJOON Algorithm 2588 using C++
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){

    //입력
    int a, b;
    double sum = 0;
    int cnt = 0;

    cin >> a >> b;

    //b 한자리씩 분리
    while(b != 0){
        
        //분리된 한 자리 b1
        int b1 = b % 10;
        int line = a* b1;
        cout << line << endl;
        
        b /= 10;
        
        //합계
        sum += line * pow(10, cnt);
        cnt += 1;
        
    }
    
    cout << sum;

    return 0;

}

