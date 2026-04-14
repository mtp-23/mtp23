class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        string ans = "";
        string test = "";
        
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] >= 'a' && s[i] <= 'z') 
            {
                ans += s[i];
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                ans += (s[i] + 32);
            }
            else if (s[i] >= '0' && s[i] <= '9') 
            {
                ans += s[i];
            }
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z') 
            {
                test += s[i];
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                test += (s[i] + 32);
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                test += s[i];
            }
        }
        
        return test == ans;
    }
};