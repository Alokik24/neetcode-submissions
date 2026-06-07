class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        // Step 1: Calculate prefix product and store in res
        res[0] = 1;
        for (int i = 1; i < n; ++i) {
            res[i] = nums[i - 1] * res[i - 1];
        }

        // Step 2: Use a variable to keep track of suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] *= suffix;
            suffix *= nums[i];
        }

        return res;
    }
};
