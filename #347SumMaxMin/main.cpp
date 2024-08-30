#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int Max = 0, Min = 1000001;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>x;
        if(x > Max){
            Max = x;
        }
        if(x < Min){
            Min = x;

        }

    }
    int s = Max + Min;
    cout<<s;



    return 0;
}
