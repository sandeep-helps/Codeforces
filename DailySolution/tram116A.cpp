#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    int sum = 0;
    int mx = 0;
    for(int i= 0; i<n; i++){
        sum += v[i].second - v[i].first; 
        mx = max(mx, sum);
    }
    cout<<mx;

    return 0;
}

