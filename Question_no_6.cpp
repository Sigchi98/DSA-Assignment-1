class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num) > 0) {
            return true; // Found a duplicate
        }
        seen.insert(num);
    }
    return false; // No duplicates found
    }
};
