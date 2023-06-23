class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Index for nums1
    int j = n - 1; // Index for nums2
    int k = m + n - 1; // Index for the merged array
    
    // Merge from the end of the arrays
    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    
    // Copy any remaining elements from nums2 if any
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
        }
    }
};
