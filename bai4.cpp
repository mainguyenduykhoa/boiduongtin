#include <iostream>

using namespace std;

int main()
{
    int n ; cin >> n;
    double s = 0;
    for ( int i = 1 ; i <= n ; i++){
        s += 1.00/ (i * 2);
    }
    cout << s;
    return 0;
}
