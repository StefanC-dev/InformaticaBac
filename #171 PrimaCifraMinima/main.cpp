#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    int Max = 0, Min = 10;

    for(int i = 1; i <= n; i++){
        cin>>x;
        int aux = x;
        while(x > 9){
            x = x/10;
        }

        if(x < Min){
            Min = x;
            Max = aux;
        }else if(x == Min){
            if(aux > Max){
                Max = aux;
            }
        }
    }
    cout<<Max;


    return 0;
}
