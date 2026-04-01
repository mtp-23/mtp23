class Solution 
{
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        // Bước 1: Đếm tần suất
        unordered_map<int, int> freq;
        for (int x : nums)
            freq[x]++;

        // Bước 2: Sort theo điều kiện
        sort(nums.begin(), nums.end(), [&](int a, int b)
        {
            if (freq[a] != freq[b])
                return freq[a] < freq[b]; // tần suất tăng dần
            return a > b;                 // nếu bằng tần suất → giá trị giảm dần
        });

        return nums;
    }
};