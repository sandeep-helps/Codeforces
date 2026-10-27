#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    
    string xyz = a + b;              
    sort(xyz.begin(), xyz.end());
    sort(c.begin(), c.end());
    
    if(xyz == c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}