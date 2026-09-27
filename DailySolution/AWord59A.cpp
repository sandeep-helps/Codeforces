#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upperLatter = 0;
    int lowerLatter = 0;
    for(int i = 0; i<s.length(); i++){
        if(isupper(s[i])){
            upperLatter++;
        }
        else{
            lowerLatter++;
        }
    }
    string newstring = "";
    if(upperLatter > lowerLatter){
        for(int i = 0; i<s.length(); i++){
            newstring.push_back(toupper(s[i]));
        }
    }
    else{
        for(int i = 0; i<s.length(); i++){
            newstring.push_back(tolower(s[i]));
        }
    }
    cout<<newstring<<" ";
    return 0;
}





