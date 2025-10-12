#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
     int n ;
    int x ;
    cin >> x >> n;
    double s = 0, p = 0;
    for ( int i = 1 ; i <= n ; i++){
        p = p + i;
        s += (double)pow(x,i) / p;
    }
        cout << s;
    return 0;
}
