class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        } 

        unordered_map <char, int> letter_count_map; 

        for (char c : s){
            letter_count_map[c]++;
            // O(n) to make, O(n) to store 
        }
        
        for (char c : t){
            letter_count_map[c]--;
            if (letter_count_map[c] < 0) {
                return false;
            // recall that we only run this code if the length of s and t are the same 
            // then, there are only two cases where this function should return false
            // 1 - s and t have different letters 
            // 2 - s and t have the same letters but in different amounts 

            // let us examine case 1
            // if s and t are the same length but have different letters, then there must be a letter in t that is not in s
            // then, letter_count_map[c] will be initially set to 0 for c in t
            // decrementing it with letter_count_map[c]-- will then set letter_count_map[c]-- to -1 
            // this triggers the return false

            // case 2 
            // if s and t and have the same letters but different amounts, there must be some letter c in t that there is more of in t than s 
            // then, letter_count_map[c] will be decreased past 0 for c in t 
            // this triggers the fales 

            // if neither of these cases, then s and t are anagrams
            }
        }

        return true;
    }
};
