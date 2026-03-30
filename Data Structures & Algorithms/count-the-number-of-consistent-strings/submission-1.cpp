class Solution 
{
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        bool check[26] = {false};
        int count = 0;

        for (char a : allowed) check[a - 'a'] = true;
        
        for (string word : words)
        {
            bool valid = true;

            for (char a : word)
            {
                if (!check[a - 'a'])
                {
                    valid = false;
                    break;
                }
            }

            if (valid) count++;
        }

        return count;
    }
};