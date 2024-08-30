#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int x = a, y = b;
    //algoritmul CMMDC
    while(b != 0){
        int rest = a % b;
        a = b;
        b = rest;
    }
    for(int i = 1; i <= a; i++){
        if(x % i == 0 && y % i == 0){
            cout<<i << " ";

        }
    }
    return 0;
}
