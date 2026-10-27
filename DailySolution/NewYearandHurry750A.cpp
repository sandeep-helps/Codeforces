#include<iostream>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    int remaining = 240 - k;
    int totalqt = 0;
    int count = 0;
    while(count < n){
        int next = (count + 1) * 5;
        if(totalqt + next <= remaining){
            totalqt += next;
            count++;
        }
        else{
            break;
        }
    }
   cout<<count;
   return 0;
}


