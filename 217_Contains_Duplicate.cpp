class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen; 
        // unordered_set is just a hashtable that inserts items in only once
        // takes in num, creates a hash for it, and then places it into the bucket for that hash if its not been inserted before 
        for (int num : nums): 
            if (seen.count(num))
                return true; 
            seen.insert(num)
    } 
    return false;    
    }
};


