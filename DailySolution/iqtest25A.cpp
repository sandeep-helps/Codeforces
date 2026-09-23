#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n; 
    cin>>n;
    int odd = 0;
    int even = 0;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i] % 2 == 0) even++;
        else odd++;
    }
    
    for(int i = 0; i<n; i++){
        if((even > odd && v[i] % 2 !=0) || (odd > even && v[i] % 2 == 0)){
            cout<<i +1;
            break;
        }
    }

    return 0;
}



