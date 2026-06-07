class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ind;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            int req = target - nums[i];
            if(!ind.empty() && ind.find(req)!= ind.end()){
                return{ind[req], i};
            }
            ind[nums[i]] = i;
        }
    }
};
