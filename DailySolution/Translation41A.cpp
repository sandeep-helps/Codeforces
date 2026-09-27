#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(s.length() != t.length()){   
        cout << "NO";
        return 0;
    }
    int n = s.length();
    int i = 0;
    int j = n-1;
    bool isRev = true;
    while(i < n){
        if(s[i] != t[j]){
            isRev = false;
            break;
        }
        i++;
        j--;
    } 
    if(isRev){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}


