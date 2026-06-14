class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int need = target - numbers[i];
            int lo = i + 1, hi = numbers.size() - 1;
            
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (numbers[mid] == need)
                    return {i + 1, mid + 1}; // 1-indexed
                else if (numbers[mid] < need)
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        return {};
    }
};