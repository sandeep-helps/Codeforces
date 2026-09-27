#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,h;
    cin>>n;
    cin>>h;
    int count = 0;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    for(int x : v){
        if(x > h){
            count +=2;
        }else{
            count ++;
        }
    }
    cout<<count;
    
    return 0;
}




