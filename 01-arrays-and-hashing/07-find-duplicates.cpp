#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    std::vector<int> ans;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[abs(nums[i]) - 1] > 0)
        {
           nums[abs(nums[i]) - 1] *= -1;
        }
        else
        {
            if (nums[i] < 0)
            {
                ans.push_back(nums[i] * -1);
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
    }

    return ans;
}
