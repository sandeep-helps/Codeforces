#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string>s(n);
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }
    int x = 0;
    for(const string &st : s){
        int len = st.length();
        if(len > 10){
            cout<<st[0]<<(len-2)<<st[len-1]<<"\n";
        }
        x++;
    }
    return 0;
}
