class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            bool found = false;  // Tìm thấy nums1[i] trong nums2 chưa
            bool hasGreater = false;

            for (int j = 0; j < nums2.size(); j++)
            {
                // Bước 1: Tìm vị trí nums1[i] trong nums2
                if (nums2[j] == nums1[i])
                {
                    found = true;  // Đánh dấu đã tìm thấy
                    continue;
                }

                // Bước 2: Sau khi tìm thấy, tìm phần tử lớn hơn đầu tiên
                if (found && nums2[j] > nums1[i])
                {
                    ans.push_back(nums2[j]);
                    hasGreater = true;
                    break;  // Dừng ngay khi tìm thấy
                }
            }

            // Không có phần tử lớn hơn → push -1
            if (!hasGreater) ans.push_back(-1);
        }

        return ans;
    }
};