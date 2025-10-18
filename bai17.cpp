#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n ;
    double x ;
    cin >> x >> n;
    double s = 0;
    long long p = 1;
    for ( int i = 1 ; i <= n ; i++){
        p *= i ;
        s += pow(x,i) / p;
    }
    cout << s;
    return 0;
}
