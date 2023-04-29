
class Solution {
public:
    int maximizeSum(vector<int>& v, int k) {
        int maxi = *max_element(v.begin(), v.end());
        int sum=maxi;
        for(int i=1;i<k;i++){
            sum+=(maxi+i);
        }
        return sum;
    }
};