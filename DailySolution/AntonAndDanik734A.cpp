#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    string s;
    cin>>s;
    int Antom = 0;
    int Danik = 0;
    for(char c : s){
        if(c == 'A'){
            Antom++;
        }
        else{
            Danik++;
        }
    }
    if(Antom == Danik){
        cout<<"Friendship";
    }
    else if(Antom > Danik){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}



