#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout <<"masukkan panjang pola :";
    cin>>n;

    cout <<"pola 1"<<endl;
    cout <<endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout <<"*";
        }
        cout << endl;
    }
    cout <<"pola 1"<<endl;
    cout <<endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout <<"*";
        }
        cout << endl;
    }
}
