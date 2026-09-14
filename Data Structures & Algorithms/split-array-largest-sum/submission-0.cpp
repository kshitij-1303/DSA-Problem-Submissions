bool possible (vector<int>& arr, int mid, int k) {
    int n = arr.size();
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i <= n - 1; i++) {
        if (arr[i] + sum > mid) {
            sum = 0;
            k--;
            i--;
        } else {
            sum += arr[i];
            count ++;
        }

        if (k == 0) {
            break;
        }

    }

    if (count == n) {
        return true;
    } else {
        return false;
    }
        
        
}


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        int ans = -1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int e = sum;
        int mid = s + (e - s)/2;

        while (e >= s) {
            if (possible(nums, mid, k)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }

            mid = s + (e - s)/2; 
        }

        return ans;

    }
};