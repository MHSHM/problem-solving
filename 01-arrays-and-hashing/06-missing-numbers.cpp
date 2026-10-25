#include <vector>
using namespace std;

vector<int> findMissing(vector<int>& nums) {
    std::vector<int> ans;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[abs(nums[i]) - 1] > 0)
           nums[abs(nums[i]) - 1] *= -1;
    }

    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
        {
            ans.push_back(i + 1);
        }
    }

    return ans;
}
