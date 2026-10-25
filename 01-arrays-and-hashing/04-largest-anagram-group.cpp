#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int largestAnagramGroup(const vector<string>& words) {
    std::unordered_map<std::string, int> umap;
    int ans = 0;

    for (auto word : words)
    {
        std::sort(word.begin(), word.end());

        umap[word]++;
        ans = std::max(ans, umap[word]);
    }

    return ans;
}
