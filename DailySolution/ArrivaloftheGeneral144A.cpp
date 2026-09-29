#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);              
    for(int i = 0; i < n; i++){
        cin >> v[i];               
    }
    int maxIdx = 0;
    for(int i = 0; i<n; i++){
        if(v[i] > v[maxIdx]){
            maxIdx = i;
        }
    }

    int minIdx = 0;
    for(int i = 0; i<n; i++){
        if(v[i] <= v[minIdx]){
            minIdx = i;
        }
    }
    int ans = maxIdx+(n - 1 - minIdx);
    if(maxIdx > minIdx) ans--;

    cout<<ans;
}

