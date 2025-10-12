#include <iostream>

using namespace std;

int main()
{
    int n ; cin >> n;
    double s = 0, p = 1;
    for ( int i = 1 ; i <= n ; i++){
        p = p * i;
        s += p;
    }
        cout << s;
    return 0;
}
