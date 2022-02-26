class Solution {
public:
	int maximumDifference(vector<int>& nums) {
		int ans = -1;
		int temp = nums[0];

		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] > temp) {
				ans = max(ans, nums[i] - temp);
			} else {
				temp = nums[i];
			}
		}

		return ans;
	}
};
