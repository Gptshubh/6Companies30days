class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0,n=nums.size(),prev=0,cur=0,mval=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            prev+=i*nums[i];
        }
        mval=prev;

        for(int i=1;i<n;i++){
            cur=prev+sum-n*nums[n-i];
            prev=cur;
            mval=max(mval,cur);
        }
        return mval;
    }
};
