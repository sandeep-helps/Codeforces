#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int groups = 0;
    vector<pair<char, char>>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i = 0; i<n; i++){
        if(v[i] != v[i-1]){
            groups++;
        }
        
    }
    cout<<groups;

    return 0;
}



