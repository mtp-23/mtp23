class Solution 
{
public:
    void reverseString(vector<char>& s) 
    {
        int t = s.size()-1;
        for (int i = 0; i < s.size()/2; i++)
        {
            char temp = s[i];
            s[i] = s[t];
            s[t] = temp;
            t--;
        }
    }
};