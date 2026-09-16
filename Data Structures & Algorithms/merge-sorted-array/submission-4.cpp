class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sorted;
        int j = 0;
        int i = 0;

        while (i < m && j < n) {

            if (nums1[i] >= nums2[j]) {
                sorted.push_back(nums2[j]);
                j++;
            } 
            else {
                sorted.push_back(nums1[i]);
                i++;
            }
        }

        // Remaining nums1 elements
        while (i < m) {
            sorted.push_back(nums1[i]);
            i++;
        }

        // Remaining nums2 elements
        while (j < n) {
            sorted.push_back(nums2[j]);
            j++;
        }

        // Copy back into nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = sorted[i];
        }
    }
};