#include <iostream>

using namespace std;

int main()
{
    int n ; cin >> n;
    double s = 0;
    for ( int i = 0 ; i <= n ; i++){
        s +=  1.0 / (2 * i +1 );
    }
        cout << s;
    return 0;
}
