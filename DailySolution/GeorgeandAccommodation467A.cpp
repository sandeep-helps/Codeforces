#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(v[i].second - (v[i].first+2) >= 0){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}

