class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        for(int i=5;i<=n;i+=5){
            int x=i;
            while(x!=0){
            if(x%5==0){
                x/=5;
                ans++;
            }
            else break;
            }
        }
        
        return ans;
    }
};
