#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     int n ;
    int x ;
    cin >> x >> n;
    double s = 0;
    for ( int i = 0 ; i <= n ; i++){
        s += pow(x,(2*i+1));
    }
    cout << s;
    return 0;
}
