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

        // First find Pivot Element
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s)/2;

        while (e > s) {
// Because Array was sorted, the min value that is the pivot index will be after the mid as it is even greater than arr[0]

            if (nums[mid] >= nums[0]) {
                s = mid + 1;

// If mid < nums[0] or arr[0], this means that the pivot is either before the current mid or it is the current mid so we don't need the elements after that.
            } else {
                e = mid;
            }

            mid = s + (e - s)/2;
        }

        int pivot = s;

        // If the array is not rotated (or rotated n times)
        if (pivot == 0) {
            return binarySearch(nums, 0, n - 1, target);
        }

        if (nums[pivot] <= target && nums[n-1] >= target) {
            return binarySearch(nums, pivot, n - 1, target);
        } else if (nums[0] <= target && nums[pivot - 1] >= target) {
            return binarySearch(nums, 0, pivot - 1, target);
        } else {
            return -1;
        }
    }
};
