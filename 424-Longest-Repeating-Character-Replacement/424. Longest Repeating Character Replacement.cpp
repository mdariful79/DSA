class Solution {
public:
    int characterReplacement(string s, int k) {
        
        if (s.size() == 0) return 0;
        
        vector <int> arr(128);
       
        int begin = 0, Count = 0;
        
        for (int end = 0; end < s.size(); end++) {
            
            Count = max(Count, ++arr[s[end]]);
            if (end - begin + 1 - Count > k)      
                arr[s[begin++]]--;
        }
        
        return s.length() - begin;
    }
};
// Time Complexity :  O(n)
// Space Complexity : O(1)
