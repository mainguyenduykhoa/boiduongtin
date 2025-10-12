#include <iostream>

using namespace std;

int main()
{
    int n ; cin >> n;
    double s = 0;
    for ( int i = 1 ; i <= n ; i++){
        s += (double)i / (i + 1);
    }
    cout << s;
    return 0;
}
