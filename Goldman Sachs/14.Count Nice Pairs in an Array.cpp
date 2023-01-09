class Solution {
public:
   int mod=1000000007;
    int rev(int n){
        int t=0;
        while(n!=0){
            t=t*10+(n%10);
            n/=10;
        }
        return t;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,long>m;
        long ans=0;
        for(int i=0;i<nums.size();i++){
            nums[i]-=rev(nums[i]);
            ans+=m[nums[i]]%mod;
            m[nums[i]]++;
        }
        
        return ans%mod;
    }
};

