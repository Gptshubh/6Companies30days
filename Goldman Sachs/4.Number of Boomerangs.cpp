class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>m;
            for(int j=0;j<n;j++){
                if(i!=j){
                    int x=pow(points[i][0]-points[j][0],2)+pow(points[i][1]-points[j][1],2);
                    if(m.find(x)!=m.end())ans+=m[x]*2;
                    m[x]++;
                }   
            } 
        }
        return ans;
    }
};
