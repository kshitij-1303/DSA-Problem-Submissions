class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
        return true;

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] > nums[(i + 1) % n])
            cnt++ ;

            if(cnt > 1)    
            return false;
        }

        return true;
    }
};

// Make the array curcular
// nums[(i + 1) % n] -> This means give me (i + 1)th element and if we have reached the end fetch 1st element.