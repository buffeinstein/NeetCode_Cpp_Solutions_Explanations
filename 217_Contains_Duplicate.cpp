class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        // unordered_set is just a hashtable that inserts items in only once
        // takes in num, creates a hash for it, and then places it into the bucket for that hash if its not been inserted before 
        for (int num : nums){
            if (seen.count(num))
                // expected O(1), as it simply has to compute the hash for num again, and then check whether num is in the bucket
                // worst case O(n), in the extremely low probability that all items landed in the same bucket 
                return true; 
            seen.insert(num);
            // ammortized expected O(1) 
            // if load factor N/M exceeds max_load_factor, the table resizes (often doubling bucket count).
    } 
    // O(n) expected runtime 
    // O(n) memory 
    return false;    
    }
};


