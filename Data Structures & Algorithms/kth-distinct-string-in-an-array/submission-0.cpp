class Solution 
{
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        vector<string> count;
        unordered_map<string, int> freq;
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        for (const string& s : arr)
        {
            if (freq[s] == 1) count.push_back(s);
        }
        if (count.size() < k) return "";
        else return count[k-1];
    }
};