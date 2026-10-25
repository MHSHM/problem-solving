#include <vector>
#include <unordered_map>

using namespace std;

long long countPairsDiff(const vector<int>& nums, int k) {
    std::unordered_map<int, int> umap;
    long long total = 0;

    // [4, 1, 4, 7], k = 3
    for (size_t i = 0; i < nums.size(); ++i)
    {
        auto left_0 = nums[i] - k;
        auto left_1 = nums[i] + k;

        if (auto iter = umap.find(left_0); iter != umap.end())
        {
            total += iter->second;
        }

        if (auto iter = umap.find(left_1); iter != umap.end() && left_0 != left_1)
        {
            total += iter->second;
        }

        umap[nums[i]]++;
    }

    return total;
}
