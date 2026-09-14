int binarySearch (vector<int>& arr, int low, int high, int k) {
    int mid = low + (high - low)/2;

    while (low <= high) {
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }

        mid = low + (high - low)/2;
    }
    return -1;
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int n = nums.size();
        int e = n - 1;
        int mid;
        
        if (nums[0] <= nums[n - 1]) {
            return binarySearch(nums, s, e, target);
        }

        while (e > s) {
            mid = s + (e - s)/2;
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        int pivot = s;

        if (target >= nums[pivot] && target <= nums[n-1]) {
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
        
    }
};
