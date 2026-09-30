class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int l = 0;
        int maxcount = 0;

        for (int r = 0; r < s.size(); r++) {
            while (seen.count(s[r])) {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxcount = max(maxcount, r - l + 1);
        }

        return maxcount;
    }
};
