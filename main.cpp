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

// Вычисление числа e как суммы ряда 1/n!
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
    double resE = findE(15);
    cout << "Result F: " << resF << endl;
    cout << "Result E: " << resE << endl;
}
