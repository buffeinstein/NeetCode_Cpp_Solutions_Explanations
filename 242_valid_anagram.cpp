class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        } 

        unordered_map <char, int> letter_count_map; 

        for (char c : s){
            letter_count_map[c]++;
        }
        
        for (char c : t){
            letter_count_map[c]--;
            if (letter_count_map[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
