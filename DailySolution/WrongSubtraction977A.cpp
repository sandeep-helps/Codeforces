#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    while (k > 0)
    {
        int ld = n % 10;
        if(ld == 0){
            n = n /10;
        }
        else{
           n = n - 1;
        }
        k--;
    }
    cout<<n;
    return 0;
}


