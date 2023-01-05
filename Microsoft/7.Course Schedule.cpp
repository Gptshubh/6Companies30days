class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& preq){
        vector<int> pre[num];
        for(auto x: preq){
            pre[x[0]].push_back(x[1]);
        }
        vector<int>in(num,0);
        queue<int>q;
        for(int i=0;i<num;i++){
            for(auto it:pre[i])
                in[it]++;
        }
        
        for(int i=0;i<num;i++){
            if(in[i]==0)
                q.push(i);
         }
        int c=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            c++;
            
            for(auto it:pre[node]){
                in[it]--;
                if(in[it]==0)
                    q.push(it);
            }       
        }
        if(c==num)
            return true;
        return false;
    }      
};
