#include<iostream>
using namespace std;

int main (){
    int n,m;
    cin>>n>>m;
    for(int r = 1; r<=n; r++){
        if(r % 2 == 1){
            for(int c = 0; c<m; c++){
                cout<<"#";
            }  
        }
        else{
            if((r / 2) % 2 == 1){
                for(int c = 0; c<m-1; c++){
                    cout<<".";
                }
                cout<<"#";
            }
            else{
                cout<<"#";
                for(int c = 0; c<m-1; c++){
                    cout<<".";
                }
            }
        }
        cout<<endl;        
    }
    return 0;
}




