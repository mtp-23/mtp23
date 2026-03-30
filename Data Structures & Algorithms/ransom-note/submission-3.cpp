class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int ran[26] = {0};
        int mag[26] = {0};

        for (char c : ransomNote)
        {
            ran[c - 'a']++;
        }
        for (char c : magazine)
        {
            mag[c - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (mag[i] < ran[i]) return false;
        }
        return true;
    }
};