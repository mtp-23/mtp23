class Solution 
{
public:
    string largestGoodInteger(string num) 
    {
        vector<int> ans;
        for (int i = 0; i+2 < num.size(); i++)
        {
            if (num[i] == num[i+1] && num[i] == num[i+2])
            {
                int t1 = stoi(num.substr(i, 3));
                ans.push_back(t1);
            }
        }
        if (ans.empty()) return "";
        int max = ans[0];
        for (int x : ans)
        {
            if (x > max) max = x;
        }

        if (max == 0) 
            return "000";

        else
            return to_string(max);
    }
};