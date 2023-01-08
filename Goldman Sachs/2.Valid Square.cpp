class Solution {
public:
    int dis(vector<int>& p1, vector<int>& p2){
        return pow(p1[0]-p2[0],2)+pow(p1[1]-p2[1],2);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int>s;

        s.insert(dis(p1,p2));
        s.insert(dis(p1,p3));
        s.insert(dis(p1,p4));
        s.insert(dis(p2,p3));
        s.insert(dis(p2,p4));
        s.insert(dis(p3,p4));

        if(s.find(0)==s.end())
            return s.size()==2 ;
        return false;
    }
};
