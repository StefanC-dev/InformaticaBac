#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;


    /*cazul 1:
    for(int x = 1; x <= n / 2; x++)
    {
        int y = n - x;
        cout << x << " " << y << endl; // '\n' = endl
    }
    */

    // x + y = n, 0 < x <= y
    for (int x = 1, y = n - 1; x <= y; x++, y--) {
        cout << x << " " << y << '\n';
    }

    return 0;
}