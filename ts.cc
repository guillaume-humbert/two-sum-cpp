#include "ts.h"
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> cache;
    std::vector<int> res;

    for (int i = 0; i < nums.size(); ++i)
    {
        auto it = cache.find(target - nums[i]);
        if (it != cache.end()) {
            res.push_back(it->second);
            res.push_back(i);
            return res;
        }

        cache[nums[i]] = i;
    }

    return res;
}

