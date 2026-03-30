class Solution {
public:
    int scoreOfString(string s) {
        int tong = 0;
        int n = s.size();

        for (int i = 0; i < n - 1; i++) {
            tong += (s[i+1] > s[i]) ? (s[i+1] - s[i]) : (s[i] - s[i+1]);
        }

        return tong;
    }
};