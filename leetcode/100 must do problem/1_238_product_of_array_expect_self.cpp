// Given an integer array nums, return an array answer such that answer[i] 
// is equal to the product of all the elements of nums except nums[i]

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>v(n+1,1);
        int l=1,r=1;
        for(int i=0;i<=n;i++){
            v[i]*=l;
            l*=nums[i];
            v[n-i]*=r;
            r*=nums[n-i];
        }
        return v;
    }
};