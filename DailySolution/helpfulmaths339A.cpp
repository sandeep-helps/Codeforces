#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    char ignore = '+';
    string temp = "";
    for(char c : s){
        if(c != ignore){
            temp.push_back(c);
        }
    }
    sort(temp.begin(), temp.end());
    int k = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] != ignore){
            s[i] = temp[k];
            k++;
        }        
    }
    cout<<s;
    return 0;
}


