class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(), nums.end());
        int cmn=numsDivide[0];

        for(int i=1; i<numsDivide.size(); i++)
            cmn=__gcd(cmn, numsDivide[i]);
        
        for(int i=0; i<nums.size(); i++){
            if(cmn%nums[i]==0)
                return i;
        }
        return -1;
    }
};
