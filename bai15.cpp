#include <iostream>

using namespace std;

int main()
{
     int n ; cin >> n;
    double s = 0, p = 0;
    for ( int i = 1 ; i <= n ; i++){
        p = p + i;
        s += 1.00 / p;
    }
    cout << s;
    return 0;
}
