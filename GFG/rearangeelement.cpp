#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;

        for(int x : nums){
            if(x < 0){
                neg.push_back(x);
            }
            else{
                pos.push_back(x);
            }
        }
        int n = max(neg.size(), pos.size());
        vector<int>ans;
        for(int i = 0; i<n; i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>v = {3,1,-2,-5,2,-4};
    vector<int>res = s.rearrangeArray(v);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}