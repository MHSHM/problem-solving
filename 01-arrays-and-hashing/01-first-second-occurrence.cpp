#include <vector>
#include <unordered_map>

using namespace std;

int firstReturn(const vector<int>& nums) {
    std::unordered_map<int, int> umap;
    for (size_t i = 0; i < nums.size(); ++i)
    {
        auto iter = umap.find(nums[i]);
        if (iter == umap.end())
        {
            umap[nums[i]] = (int)i;
        }
        else
        {
            return nums[i];
        }
    }

    return -1;
}
