#include <iostream>
#include <cmath>
using namespace std;

// 20! = 2432902008176640000 не помещается в int, поэтому long long
long long factorial(int x) {
    long long res = 1;
    for (int i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}

int main() {
    long long res = factorial(20);
    cout << "Result: " << res << endl;
}
