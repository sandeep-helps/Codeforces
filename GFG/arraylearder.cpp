#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        
        vector<int>ans;
        int n = arr.size();
        int maxRight = INT8_MIN;
        for(int i = n - 1; i>=0; i--){
            if(arr[i] >= maxRight){
                ans.push_back(arr[i]);
                 maxRight = arr[i];
            }
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main (){
    Solution s;
    vector<int>v = {16, 17, 4, 3, 5, 2};
    vector<int>res = s.leaders(v);
    for(int x : res){
        cout<<x<<" ";
    }

    return 0;
}







