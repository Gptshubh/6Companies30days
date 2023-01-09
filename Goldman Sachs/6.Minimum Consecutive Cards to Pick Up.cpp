class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>m;
        int ans=1e9;

        for(int i=0;i<cards.size();i++){
            if(m.find(cards[i])!=m.end()){
                ans=min(ans,i-m[cards[i]]+1);
            }
            m[cards[i]]=i;
        }
        if(ans==1e9)return -1;
        return ans;
    }
};
