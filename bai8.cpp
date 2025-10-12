#include <iostream>

using namespace std;

int main()
{
    int n ; cin >> n;
    double s = 1.00/2;
    for ( int i = 1 ; i <= n ; i++){
        s += (float)( 2 * i + 1) / ( 2*i+ 2 );
    }
    cout << s;
    return 0;
}
