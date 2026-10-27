#include<iostream>
#include<vector>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        int common;
        if(v[0] == v[1]){
            common = v[0];
        }
        else if(v[0] == v[2]){
            common = v[0];
        }
        else{
            common = v[1];
        }
        for(int i = 0; i<n; i++){
            if(v[i] != common){
                cout<<i + 1<<endl;
                break;
            }
        }
    }
    return 0;
}


