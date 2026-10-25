#include <utility>
#include <vector>
#include <unordered_map>

using namespace std;

vector<long long> rangeSums(const vector<int>& nums, const vector<pair<int,int>>& queries) {
    const int N = (int)1e5;
    long long freq[N] = {};
    freq[0] = nums[0];

    for (size_t i = 1; i < nums.size(); ++i)
        freq[i] = nums[i] + freq[i - 1];

    std::vector<long long> ans(queries.size(), 0);

    for (size_t i = 0; i < queries.size(); ++i)
    {
        if (queries[i].first == 0)
        {
            ans[i] = freq[queries[i].second];
        }
        else
        {
            ans[i] = freq[queries[i].second] - freq[queries[i].first - 1];
        }
    }

    return ans;
}
