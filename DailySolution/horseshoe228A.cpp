#include<iostream>
#include<set>
using namespace std;

int main(){
    long long a,b,c,d;
    set<int>st;
    cin>>a;
    st.insert(a);
    cin>>b;
    st.insert(b);
    cin>>c;
    st.insert(c);
    cin>>d;
    st.insert(d);
    cout<<4 - st.size();
}


