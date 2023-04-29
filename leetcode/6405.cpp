class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>v(A.size());
        map<int,int>map;
        int sum=0;
        for(int i=0;i<A.size();i++){
            (map[A[i]]++);
            (map[B[i]]++);
            if(map[A[i]]==2) {
                sum++;
                map[A[i]]=0;
            }
            if(map[B[i]]==2){
                sum++;
                map[B[i]]=0;
            } 
            v[i]=sum;
        }
        return v;
    }
};