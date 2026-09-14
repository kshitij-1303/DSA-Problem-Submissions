bool possible(vector<int>& piles, int mid, int h) {
    int hours = 0;

    for (int i = 0; i < piles.size(); i++) {
        hours += (piles[i] + mid - 1) / mid;
    }

    return hours <= h;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int sum  = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += piles[i];
        }
        int e = sum;
        int mid = s + (e - s)/2;
        int ans;

        while(e >= s) {
            if (possible(piles, mid, h)) {
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
