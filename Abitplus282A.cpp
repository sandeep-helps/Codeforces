#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n;
    cin>>n;
    int ans = 0;
    string s;
    for(int i = 0; i<n; i++){
        cin>>s;
        if(s[1] == '+') ans ++;
        else ans --;
    }
    cout<<ans;

    return 0;
}


