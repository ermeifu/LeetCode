class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int res = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s.size() - i <= res) {
				break;
			}
			set<char> t;
			for (auto j = s.begin() + i; j != s.end(); ++j) {
				if (!t.insert(*j).second) {
					break;
				}
			}
			if (t.size() > res) {
				res = t.size();
			}
		}
		return res;
	}
};
