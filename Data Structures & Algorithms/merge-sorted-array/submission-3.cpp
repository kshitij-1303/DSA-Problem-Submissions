class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if (m == 0) {
            nums1 = nums2;
            return;
        }

        int j = 0;
        int i = 0;

        while (j < n) {

            // Find position where nums2[j] should be inserted
            while (i < m + j && nums1[i] <= nums2[j]) {
                i++;
            }

            // Shift elements to the right
            int key = nums2[j];

            for (int k = i; k < m + j + 1; k++) {
                int temp = nums1[k];
                nums1[k] = key;
                key = temp;
            }

            j++;
            i = 0;
        }
    }
};