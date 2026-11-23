#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int x) {
    long long res = 1;
    for (int i = 1; i <= x; ++i)
    {
        res *= i;
    }
    return res;
}

double findE(int steps) {
    double e = 1.0;
    for (int i = 1; i <= steps; ++i)
    {
        e += 1.0 / factorial(i);
    }
    return e;
}

int main() {
    long long resF = factorial(10);
    double resE = findE(10);
    cout << "10! = " << resF << endl;
    cout << "e = " << resE << endl;
}
