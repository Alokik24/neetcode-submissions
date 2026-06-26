class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> ind;
        for(int i=0; i<n; i++){
            int req = target - nums[i];
            if(!ind.empty() && ind.find(req) != ind.end()){
                return {ind[req], i};
            }
            ind[nums[i]] = i;
        }
        return {};
    }
};
