class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        
        set<int>n(nums.begin(),nums.end());
        int ml=0;
        
        for (int p :n) {
            if (n.find(p-1)==n.end()) {
                int cn =p;
                int cl=1;
                while (n.find(cn+1)!=n.end()){
                    cn++;
                    cl++;
                }
                ml=max(ml,cl);
            }
        }  
        return ml;
    }
};
