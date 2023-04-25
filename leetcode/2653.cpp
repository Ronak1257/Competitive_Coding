// Given an integer array nums containing n integers, find the beauty of each subarray of size k.

// The beauty of a subarray is the xth smallest integer in the subarray if it is negative, or 0 if there are fewer than x negative integers.

// Return an integer array containing n - k + 1 integers, which denote the beauty of the subarrays in order from the first index in the array.

// A subarray is a contiguous non-empty sequence of elements within an array.




//normal limit solution
// class Solution {
// public:
//     vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
//         vector<int>v;
//         for(int i=0;i<=nums.size()-k;i++){
//             vector<int>q;
//             for(int j=i;j<i+k;j++){
//                 q.push_back(nums[j]);
//             }
//             sort(q.begin(),q.end());
//             v.push_back(q[x-1]<0?q[x-1]:0);
//         }
//         return v;
//     }
// };