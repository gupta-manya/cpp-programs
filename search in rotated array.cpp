class Solution {
public:
    int search(vector<int>& nums, int k) {
        int s = 0;
        int n = nums.size();
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == k) {
                return mid;
            }
            // left half
            if (nums[s] <= nums[mid]) {
                if (nums[s] <= k && k <= nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }

            } else {
                if (nums[mid] <= k && k <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
            mid = s + (e - s) / 2;
        }

        return -1;
    }
};
