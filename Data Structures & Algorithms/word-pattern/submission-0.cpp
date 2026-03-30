class Solution 
{
public:
    bool wordPattern(string pattern, string s) 
    {
        vector<string> words;
        int n = s.size();
        int si = 0; 

        while (si <= n) 
        {
            int end = s.find(' ', si);

            if (end == string::npos) end = n;

            words.push_back(s.substr(si, end - si));

            si = end + 1;
        }


        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> charToWord; 
        unordered_map<string, char> wordToChar; 

        for (int i = 0; i < pattern.size(); i++) 
        {
            char c = pattern[i];
            string w = words[i];

            if (charToWord.count(c) && charToWord[c] != w) return false;
            if (wordToChar.count(w) && wordToChar[w] != c) return false;

            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};