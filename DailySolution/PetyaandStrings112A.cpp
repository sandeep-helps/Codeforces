#include<iostream>
using namespace std;

int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    for(int i = 0; i<a.length(); i++){
        char x = tolower(a[i]);
        char y = tolower(b[i]);
        if(x < y){
            cout<<"-1";
            return 0;
        }
        else if(x > y){
            cout<<"1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}








