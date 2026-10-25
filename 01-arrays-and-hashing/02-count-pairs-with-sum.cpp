#include <vector>
#include <unordered_map>

using namespace std;

long long countPairs(const vector<int>& nums, int k) {
    // [1, 5, 3, 3, 3]

    std::unordered_map<int, int> umap;
    long long total = 0;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        auto diff = k - nums[i];

        if (auto iter = umap.find(diff); iter != umap.end())
        {
            total += iter->second;
        }

        umap[nums[i]]++;
    }

    return total;
}
