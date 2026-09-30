#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>points(n);
    int count = 0;
    for(int i = 0; i<n; i++){
        cin>>points[i];
    }
    int worst = points[0];
    int best = points[0];
    for(int i = 1; i<n; i++){
        if(points[i] < worst){
            worst = points[i];
            count++;
        }
        else if(points[i] > best){
            best = points[i];
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}

