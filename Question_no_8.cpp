class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> numSet;
        int duplicateNum = -1;
        int missingNum = -1;

        // Find the duplicate number and calculate the sum of nums
        int sum = 0;
        for (int num : nums) {
            if (numSet.count(num) > 0) {
                duplicateNum = num;
            }
            numSet.insert(num);
            sum += num;
        }

        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2; // Calculate the sum of 1 to n
        missingNum = expectedSum - (sum - duplicateNum);

        return {duplicateNum, missingNum};
    }
};
