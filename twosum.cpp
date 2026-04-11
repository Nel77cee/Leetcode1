// Solution to the infamous Leetcode Prblm : 1 TWO SUM


class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;  // number -> index
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            auto it = m.find(complement);
            if(it != m.end()) {
                return {it->second, i};
            }
            m[nums[i]] = i; // store current number with index
        }
        return {};  // no solution found
    }
};
