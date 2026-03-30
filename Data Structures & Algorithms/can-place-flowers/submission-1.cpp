class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int c = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            bool leftOk  = (i == 0) || (flowerbed[i-1] == 0);
            bool rightOk = (i == flowerbed.size()-1) || (flowerbed[i+1] == 0);

            if (flowerbed[i] == 0 && leftOk && rightOk)
            {
                flowerbed[i] = 1;  // ✅ Đánh dấu đã trồng
                c++;
            }
        }
        return c >= n;  // ✅ Đủ chỗ hay không
    }
};