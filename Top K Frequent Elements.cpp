class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int>f;
    for (int d : nums) {
        f[d]++;
    }
    int n=nums.size();
    vector<vector<int>>bucket(n+1);

    for (auto pair: f) {
        int freq = pair.second;
        bucket[freq].push_back(pair.first);
    }
    vector<int> result;
    for (int i=n;i>=0 && result.size()<k;i--) {
        for (int num:bucket[i]) {
            result.push_back(num);
            if (result.size()==k) {
                return result;
            }
        }
    }
    return result;
    }
};
