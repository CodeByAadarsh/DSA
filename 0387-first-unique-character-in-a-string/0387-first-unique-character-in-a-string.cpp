class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        queue<int> q;
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            q.push(i);
        }
        while (!q.empty()) {
            int i = q.front();
            q.pop();

            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};