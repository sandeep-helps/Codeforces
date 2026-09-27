#include<iostream>
using namespace std;

int main(){
    int Limak;
    int Bob;
    cin>>Limak;
    cin>>Bob;
    int count = 0;
    while(Limak <= Bob){
        Limak *= 3;
        Bob *= 2;
        count++;
    }
    cout<<count;

    return 0;
}
