bool possible (vector<int>& weights, int days, int mid) {
    int sum = 0;
    int i = 0;
    while (i < weights.size()) {
        if (weights[i] > mid) {
            return false;
        }  else if (sum + weights[i] > mid) {
            sum = 0;
            days--;
        } else {
            sum += weights[i];
            i++;
        }
    }
    if (days > 0) {
        return true;
    } else {
        return false;
    }
}


class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int weightSum = 0;
        for (int i = 0; i < weights.size(); i++) {
            weightSum += weights[i];
        }
        int e = weightSum;
        int mid = s + (e - s)/2;
        int ans = 0;
        while (e >= s) {
            if (possible(weights, days, mid)) {
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