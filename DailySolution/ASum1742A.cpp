#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    for(int i = 0; i<n; i++){
        cin>>a>>b>>c;
        if(a + b == c || b + c == a || c + a == b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}





