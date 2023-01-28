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