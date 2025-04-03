class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        std::unordered_map<int,int>map;
        for(int i=0;i<n.size();i++){
            int x=target-n[i];
            if(map.count(x))
            return {map[x],i};
        map[n[i]]=i;
        }
        return {};

    }
};
