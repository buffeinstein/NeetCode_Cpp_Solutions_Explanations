class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // make a tracker of a number and its index
        unordered_map <int, int> tracker; 

        for (int i = 0; i < nums.size(); i++) {
            // if the other addend in tracker
            if (tracker.count(target - nums[i])){
                // return the addend index and curr index
                return {tracker[target - nums[i]], i};
            }
            else {
                // add this number and its index to tracker
                tracker[nums[i]] = i;
            }
        }
        return {0, 0};
    }
};

// one pass on hash map
// O(n) runtime
// O(n) spacd
