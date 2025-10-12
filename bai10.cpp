#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n ;
    int x ; cin >> x >> n ;
    double s = 0;
    for ( int i = 1 ; i <= n ; i++){
        s = pow( x , n);
    }
        cout << s;
    return 0;
}
