#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double sum = 0;
    cin>>n;
    for(int i =0; i<n; i++){
        double x;
        cin >> x;
        sum += x;
    }
    double ans = sum / n;
    cout<<fixed<<setprecision(12)<<ans;
}


